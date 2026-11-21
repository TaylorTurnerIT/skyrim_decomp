Transfer status: UNREVIEWED

# Finding: grass fade capacity, output scale, density mean, and fade factor

Status: OBSERVED for the tagged branches and values. Interpretations are tagged **inferred**. Static only.

Author: MR-3, a `gpt-6.2-sol` run via Codex (not the reviewer below). The G18 draft is by a separate `gpt-6.2-sol` run via Codex, which is also not its reviewer.  
Human operator: Taylor.  
AI assistance / model: `gpt-6.2-sol` via Codex.  
Date (UTC): 2026-11-21.  
Target build id / image SHA-256: `sse-steam-1-7-104` / `846efccf0c1374d71f892907f46549560f2fcb0a75cb87a3eed438baa0f1402f` (the measured hash equals the target pin).  
Function RVAs: G16: `0x206d40`, `0x209020`, `0x209c60`, `0xfe27c0`, `0xfe28b0`, `0xfe2ae0`, `0xfe2c80`, `0xfe3320`, `0xfe3b80`, `0x10104f0`, `0x1012830`, `0x1522870`, `0x1523440`, `0x155f070`, `0x100bed0`. G17: `0x37ac30`, `0x116ac80`, `0x1522520`, `0x15233c0`, `0x14ec020`, `0x14ec040`, `0x40b950`. G09/G10: `0x2afb20`, `0x2aae40`. G18: `0x2cb300`, `0x2cb4f0`, `0x151dbf0`, `0x1522870`, `0x1523440`, `0x155f070`, `0x100bed0`, `0x208f60`, `0x151dca0`.  
Source exposure: mixed. Static analysis of the operator's pinned image and owned shader package, plus generated CrashLogger name and type records and public Direct3D documentation. The analysis used no Mudcrab source or sibling implementation.  
Sources and immutable revisions: the pinned image and the operator's own shader package. The generated metadata identifies [CrashLogger mod 59818](https://www.nexusmods.com/skyrimspecialedition/mods/59818), version `2026.10.24`. Only names and layout metadata are cited. This finding extends `findings/grass-retail-constants.md` at `6c3bac48fae2bd05009e30423643cfa1ef217702`. Public rules: [Direct3D 11.3 functional specification §7.5](https://microsoft.github.io/DirectX-Specs/d3d/archive/D3D11_3_FunctionalSpec.htm#ConstantBuffers), [Direct3D 11.3 §3.1](https://microsoft.github.io/DirectX-Specs/d3d/archive/D3D11_3_FunctionalSpec.htm#FloatingPointRules) and [D3D11 map modes](https://learn.microsoft.com/en-us/windows/win32/api/d3d11/ne-d3d11-d3d11_map).  
Intended recipient: Skyrim Research department lead for boundary review. The proposed downstream use is Mudcrab's grass retail-facts work. The maintainer's transfer decision is pending.

Name provenance: `CRASHLOGGER_PDB(59818@2026.10.24)` applies to these generated names: `Atmosphere::Update`, `Renderer::MenuManagerDrawInterfaceStartHook`, `BSFogProperty`, `invFrameBufferRange`, `TESObjectCELL::UpdateGrassFade` and `TESObjectCELL::ClearGrassFade`. The labels do not establish the store or selector semantics. `SetFramebufferRange` is the retail command-table spelling and is not a generated name. Descriptive names for other roles are `GUESS`.

Supersession: this finding supersedes the G16 and G17 wording of `findings/grass-retail-constants.md` and clarifies its G09 wording. G10 is confirmed and keeps its wording. The G18 text below supersedes the merged G18 wording "per-instance" and the earlier "separate per-instance factor" statement in the merged review text. Downstream, use the wording "CPU-uploaded fade-in factor per draw-group slot". The G16 text below states the group indexing and the multiply-add cutoff precisely.

Tags: **verified** means read in the pinned image or shader package at the cited addresses. **Inferred** means derived from those observations. **Unverified** means the trace did not establish the claim. Evidence addresses in G16, G17, G09 and G10 are virtual addresses (VAs) at image base `0x140000000`. Evidence addresses in G18 are RVAs of the pinned image.

## Question and method

What happens when a grass shape reaches slot 960, what supplies the exterior output scale, and how does the density mean compare with `T`? The trace covered the collector, group creation, draw dispatch and constant setup in the pinned image. It also covered the group 2 shader records in `shaders011.fxp` (zero-based group 2) and both density branches up to their mean tests. The executable SHA-256 was asserted against `builds/target.json`. Keep listings and other game-derived material in `.local/`. None is published here.

## Observations

### G16. Fade capacity per draw-group slot (verified, high confidence, static)

- **Unit of the cap.** The 960 limit counts draw-group slots in a shared shape. One slot can hold several blade instances. The cell generator derives two signed spatial quotients by six and collects layer records. The shape identity uses the grass form ID and the two spatial components. Finalization divides the accumulated blades into groups. For a mesh with nonzero triangle and vertex counts, the renderer sets the group limit to the smaller of `floor(65535 / (3 × triangles))` and `floor(65535 / vertices)`. Group insertion reuses an empty shape slot or appends one. The queued path uses the same slot array when it drains.
- **Upload.** Both fade uploads use the shape's slot-array length at shape offset `0x170`. They write the first `min(length, 960)` factors in slot order. The scalar tail writes only the remaining factors. The renderer creates four rotating dynamic resources with a byte width of 3,840. It maps a full resource with `WRITE_DISCARD` and binds it at vertex constant-buffer slot 8.
- **Draw.** The draw loop uses the same slot-array length without the clamp. A null group, or an eligibility byte of zero, skips submission. An eligible slot supplies its index to vertex constant-buffer slot 7. It submits one indexed instanced draw with the blade count stored in the group at offset `0x4c`. An eligible slot at index 960 or higher still submits. The traced upload and draw contain no second fade batch. Crossing slot 959 does not itself cause a skip, another fade upload or another shape.
- **Read at and above 960 (API-defined).** Both distinct vertex programs cover all 18 vertex records of group 2. They declare 240 four-component vectors at slot 8 and read vector `floor(unsigned slot / 4)`. A dot product with a one-hot vector selected by `slot mod 4` produces the factor. At slot 960 or higher the vector lies outside the 3,840-byte binding. Direct3D 11 returns zero in every component. The API's 4096-vector visibility limit does not enlarge that binding.
- **In-range tail.** When the upload has fewer than 960 factors, the unwritten in-range tail has undefined contents after the discard map. The draw loop supplies no slot index in that tail. The final partial vector can still contain unwritten lanes that the dot product reads. For finite lane contents the result is the selected factor. The result with nonfinite unwritten lanes is unverified in retail.
- **Pixel consequences.** For finite inputs, a zero group factor gives zero combined fade. In group 2, the lit alpha-tested pixel records 9–15 and the depth-style records 7, 8, 16 and 17 evaluate `texture alpha × combined fade − cutoff` with a multiply-add. They discard when the result is below zero. A zero factor therefore causes discard at a positive normal cutoff. The lit alpha-tested variants write alpha `1` for surviving pixels. The depth-style variants compute output alpha with a separate product. Opaque lit records 0–6 ignore the fade.
- **Unverified.** Whether a retail scene reaches an eligible excess slot, which pass renders it, and the visual result. The scene counts are also unverified.

Confidence: high for the static submission and shader rules. A retail draw capture at slot 960 or higher would establish scene reachability, the active pass and the visual result.

Evidence: shape key and collection `0x140206e25`–`0x140206e70`, `0x140206fdc`, `0x140207045`, `0x140209cd7`–`0x140209ce4`, `0x140207259`–`0x140207271`. Finalization `0x14020732c`, group split `0x140fe2917`–`0x140fe2a29`, group limit `0x14100d950`–`0x14100d981`. Insert and drain `0x140fe2bb7`–`0x140fe2c30`, `0x140fe2ef7`–`0x140fe2f70`, `0x140fe3555`–`0x140fe35af`, `0x140fe3c19`–`0x140fe3ca8`. Uploads and resources `0x141012842`–`0x14101288f`, `0x1410104f0`–`0x141010568`, `0x141522f1c`–`0x141523043`, `0x141523455`–`0x141523569`. Draw `0x14155f698`–`0x14155f784`, `0x14100bfba`–`0x14100bfd6`. Shader records: zero-based group 2 of `shaders011.fxp`.

### G17. Lit grass shading and output scale (verified, high confidence, static; frame value inferred)

- **Shading.** The lit grass pixel shaders add the ambient term to the direct term, then scale the combined RGB by the output scale. The ambient term is `C × ambient × T`. The direct term is `NdotL × C × sunColour × T × shadow`, with `shadow = mask + fShadowClampValue × (1 − mask)`. The `RunGrass` group has no explicit `1/π` multiplier in its shader bodies. The evidence is zero-based group 2 of `shaders011.fxp`, with lit pixel records 0–6 and 9–15, plus the native constant setup.
- **Where the scale lives.** The output scale is the fourth lane of pixel constant register `cb2[16]`. The two traced setup paths write the vector at `0x1433d4d50`. That address is 0x100 bytes from the pixel constant block that starts at `0x1433d4c50`, referenced at `0x14152293f`. The fourth lane of vector 16 scales lit RGB in group 2 pixel records 0–6 and 9–15.
- **Selector.** The two traced setup ranges are `0x1415225ea`–`0x141522656` and `0x1415233c4`–`0x141523433`. The first range can bypass the selector at `0x1415225e4`. When reached, each selector uses the current scene index at `0x1420d6970`. It retrieves the indexed node's fog property (`BSFogProperty`, `CRASHLOGGER_PDB(59818@2026.10.24)`) through `0x1414ec040`–`0x1414ec055`. For a present property and finite distances, either distance being nonzero selects the global. Two zero distances select the vector `(0, 0, 0, 1)` from `0x1417eab80`. A null fog property skips the staging-vector write at that site.
- **Stores.** The global's initial float32 at `0x1420d694c` is `0.8333333134651184`. The reference scan found three direct stores in two routines. A successful `SetFramebufferRange` parse writes the float32 reciprocal of its argument at `0x14037ac8f`. The failure path returns before the store. The handler applies no local clamp. An argument of `2.0` writes `0.5`. The command-table record starts at `0x142092770`, with the handler pointer at `0x1420927a0`. The conditional interface path in `Renderer::MenuManagerDrawInterfaceStartHook` (`CRASHLOGGER_PDB(59818@2026.10.24)`) saves the current value at `0x14116aceb`, sets `1.0` at `0x14116acfb` and restores the saved value at `0x14116afb6`. The call sites are `0x140656921` and `0x1406e4dc0`. The scan checked overlapping references to the field and fixed-offset references from materializations of the state base in their own function ranges. It found no direct weather, time-of-day or imagespace writer and no additional store. The scan cannot exclude an indirect alias or a writer in an external module.
- **Two different `1.0` values.** The `1.0` stored during the interface override temporarily changes the global. The `1.0` that the two-zero-distance fallback selects is a per-setup constant choice. The global is not changed.
- **Startup and update.** Exterior startup installs scene index 0 and passes a property with far distance `163840.0` to the scene setter. The setter also has a default-property creation branch that sets both distances to `500000.0` for a null input. `Atmosphere::Update` (`CRASHLOGGER_PDB(59818@2026.10.24)`) checks for a scene 0 fog change and can rebind its property. It copies the sky fog distances into the property only conditionally. A branch skips the copy when the property's low flag byte is zero.
- **Inferred, static only.** An exterior pass that reaches the selector with a present property and finite, nonzero fog distances selects the current global. It gives the compiled initial value `0.8333333134651184` if the global retains it. Weather can change the distances that the selector tests. The scene index is mutable. Writes at `0x140529a5d`, `0x140989bd3`, `0x14098a073`, `0x1414ecdac`, `0x14150c2c5` and `0x14150c748` belong to the frame selector. They are separate from the scale stores.
- **Unverified.** The active scene index, fog property, fog distances and output scale in a retail exterior frame. Also unverified: whether shipped conditions select the two-zero fallback while exterior grass draws.

Confidence: high for the three identified stores and the branch conditions. A write watchpoint, or a capture of the active fog property and `cb2[16].w`, would test the frame inference and detect an indirect writer that the scan missed.

Evidence: `0x1420d694c`, `0x142092770`–`0x1420927a0`, `0x14037ac8f`, `0x14116aceb`–`0x14116acfb`, `0x14116afb6`, `0x1414ec020`, `0x1414ec040`–`0x1414ec055`, `0x1415225ea`–`0x141522656`, `0x1415233c4`–`0x141523433`, `0x14152293f`, `0x140655b84`–`0x140655b9a`, `0x140655c9e`–`0x140655d0f`, `0x14155c3aa`–`0x14155c3af`, `0x14155c410`–`0x14155c42b`, `0x141510f7f`–`0x141510f86`, `0x141511018`–`0x141511028`, `0x14040b97a`–`0x14040b991`, `0x14040bad5`–`0x14040baf2`, and group 2 lit pixel records 0–6 and 9–15.

### G09. Texture threshold and nine-weight mean (verified, high confidence, static)

- **Clamp.** For finite settings, `T` is floored at zero. A value greater than one is replaced by float32 `0.8999999761581421`. The weighted-layer coverage floor in G08 of `findings/grass-retail-constants.md` also applies.
- **Mean.** Both layer paths start with the first stored density weight. They add the other eight in increasing storage order, including zero weights. They multiply the sum once by the stored float32 reciprocal of nine, `0.1111111119389534` (loaded from `0x14181dfe8`). Each scalar step uses float32 and the active CPU rounding mode. Zero weights stay in the divisor of nine.
- **Comparison.** The mean passes on an ordered `mean >= T`. Equality passes. A lower or unordered comparison clears all nine weights and preserves the record. This describes the comparison if it completes. It does not imply that a NaN setting survives the clamp. At the shipped `T = 0`, a mean of zero passes.
- **Base residual coverage.** Base residual coverage is one minus the sum of the five weighted coverage bytes, each multiplied by the stored float32 `1/255` factor `0.003921568859368563` (at `0x141b5bdc8`).
- **Synthetic example (not a game capture).** With round-to-nearest and ties-to-even, density `5` and nine eligible samples give the weight `0.04999999701976776` and the sum `0.44999998807907104`. Multiplication by the stored reciprocal gives `0.05000000074505806`, the float32 value of `0.05`. This equals float32 `T = 0.05` and keeps the weights. Dividing the rounded sum by nine gives `0.04999999701976776` and would fail that threshold. For example, nine weighted coverage bytes of `255` pass the sample threshold and coverage floor at this setting. The case makes no claim about a shipped cell or about live CPU control state.

Confidence: high. An independent re-read of the two arithmetic and comparison ranges would check the order and the boundary condition. No scene capture is needed to resolve this rule for the pinned image.

Evidence: clamp `0x1402afb4f`–`0x1402afb81`, reciprocal load `0x1402afb9d`, constant `0x14181dfe8`, base path `0x1402afe0d`–`0x1402afe67`, weighted path `0x1402b028d`–`0x1402b02e8`, residual helper `0x1402aae40`–`0x1402aaeef`.

### G10. Density per sample (verified, high confidence, static)

A weighted sample gets `density × 0.01` when its coverage byte exceeds `trunc(T × 255)`. The weighted path compares an unsigned coverage byte with the truncated float32 product of `T` and 255. A base sample gets the same weight when its float residual coverage exceeds `T`. The base path uses an ordered strict comparison. A sample that fails its threshold gets zero, and it still counts in the mean of G09. The residual helper sums five byte contributions and returns one minus their sum times the stored `1/255` factor. An eligible sample gets the density value times the stored float32 `0.009999999776482582` (at `0x141b5bdd0`). The wording of G10 in `findings/grass-retail-constants.md` needs no change.

Evidence: `0x1402b00e7`–`0x1402b0126`, `0x1402afce1`–`0x1402afdf6`, `0x1402aae40`–`0x1402aaeef`, `0x141b5bdc8`, `0x141b5bdd0`.

### G18. Grass fade: group factor and distance ramp (verified; observations 1, 3 and 4 confirmed, observation 2 corrected; high confidence, static)

- **Index and upload unit.** Each group 2 grass draw supplies its draw-group slot in vertex `CB7[0].x`. The vertex shader selects vector `floor(unsigned(slot) / 4)` and lane `slot mod 4` in the 240-vector fade buffer `CB8`. One CPU-uploaded fade-in factor per draw-group slot is shared by every instance in that draw. Each upload copies a prefix of up to 960 slot factors.
- **CPU value.** With `bEnableGrassFade` set, the cell clear path (`TESObjectCELL::ClearGrassFade`, `CRASHLOGGER_PDB(59818@2026.10.24)`) sets the factor to zero. The first update that creates a cell entry (`TESObjectCELL::UpdateGrassFade`, `CRASHLOGGER_PDB(59818@2026.10.24)`) also publishes zero. Existing entries advance in float32 as `min(1, old + min(dt / fGrassFadeInTime, 0.1))`. Both bounds are upper limits, and values equal to either limit pass unchanged. The compiled fade-in time is 1.8 seconds. The CPU reads `dt` from shader timer slot 1. The traced timer provider supplies the game timer delta after the global time multiplier, or zero when its second argument is set. Clearing `bEnableGrassFade` skips the cell clear and update paths. The upload still copies stored factors, with missing shape entries filled at 1.0. The two names are generated labels and do not establish the store semantics.
- **Vertex fade product.** The grass vertex shader outputs `slotFactor × (1 − saturate((d − fadeStart) / fadeRange))` in `TEXCOORD2`. Here `d` is the length of clip-space XYZ before division by W. The CPU supplies the scaled effective start and the difference of the scaled endpoints. The two fade multipliers are the uploaded slot factor and the per-vertex distance factor. Vertex attributes can affect the distance through the clip-space position. The texture coordinates select the pixel texture sample.
- **Pixel use.** In zero-based group 2 of `shaders011.fxp`, pixel records 9–15 and 7, 8, 16, 17 discard when `texture alpha × interpolated fade − cutoff` is strictly below zero. At equality the pixel survives. Lit alpha-tested records 9–15 write target 0 alpha 1. Depth-style records 7, 8, 16, 17 write the texture-alpha times fade product to target 0 alpha. Opaque lit records 0–6 ignore the fade and write target 0 alpha 1.
- **Unverified.** The visual effect of any draw past the uploaded prefix. No retail scene capture or runtime configuration was measured. A visual prediction is unverified.

Confidence: high within the traced static paths. These are static findings. A retail capture with slot constants and the active shader pass would establish the values used in a scene and their visual result.

Evidence (RVAs): slot binding at `0x155f6df–0x155f73e`, instance count at `0x155f76f–0x155f776`, draw-group count at `0x155f781–0x155f784`, indexed instanced draw at `0x100bfd6`, upload caps at `0x1522f1c–0x1522f2e` and `0x1523455–0x152346d`. Cell routines `0x2cb304`, `0x2cb3f0–0x2cb478`, `0x2cb4f4`, `0x2cb5c0–0x2cb623`. Compiled defaults at `0x20794d8` and `0x20794f0`. Timer: `dt` read at `0x2cb440`, array at `0x20d68d4`, writer at `0x658d24–0x658d58`, provider at `0x6537cd–0x6537d4`, selector evidence `0x65f58a–0x65f59f`, `0x65f5c5–0x65f5cc`, `0x659d4a–0x659d80`, `0xce393a–0xce3952`. Missing-entry fill at `0x151dc61–0x151dc7e`. Fade constants at `0x208f60–0x208f9b`, `0x151dca0–0x151dcc0`, `0x1522b46–0x1522b91`. Shader records: zero-based group 2 of `shaders011.fxp`.

## Interpretation and alternatives

- G16 should say "one fade factor per draw-group slot." Mesh batching can produce several groups inside one shape. A shape with more than 960 blades can stay within the fade capacity. When an eligible group lies beyond slot 959, the renderer submits it with a zero fade read.
- G17 should separate the two `1.0` values described above.
- G18 should say "CPU-uploaded fade-in factor per draw-group slot" in place of "per-instance fade factor". It should call the shader ramp a "per-vertex clip-space distance fade". The slot factor changes over time. The shader ramp changes with position.
- The G09 mean sentences of the merged finding can be read as: each path adds the nine resulting density weights in storage order using float32 arithmetic, then multiplies by the stored float32 reciprocal of nine. The weights are kept if the mean is at least `T`. A lower or unordered mean clears all nine weights and preserves the record.

## Reproduction and sanitized evidence

Generate local listings of the addresses above from your own copy of the pinned image and compare the constants and control flow named in each item. Shader items: extract and decode zero-based group 2 of `shaders011.fxp` from your own install. Keep listings in `.local/`.

## Negative results and limitations

- No retail frame or game state was captured. The draw and scale outcomes are static only. Scene reachability, appearance and the actual per-frame scale remain unverified.
- The writer count covers traced references in this pinned executable. Indirect writes through an untracked alias, injected modules and other builds are outside that count.
- The in-range unwritten tail of the fade upload has undefined contents. The retail result with nonfinite lane contents is unverified.
- G18: no retail scene capture or runtime configuration was measured. The visual effect of any draw past the uploaded prefix, and any visual prediction, are unverified.

## Independent review (2026-11-21)

Reviewer: GPT 6.2 Sol (`gpt-6.2-sol`) through Codex, high effort, fresh context, separate run. The reviewer did not author or draft this finding. It also did not perform the earlier review of `findings/grass-retail-constants.md`. The review was arranged by the skyrim-research department lead (Claude Sonnet 5.5), which also did not draft the finding. Date: 2026-11-21.
Source reviewed: the draft of this finding, against the pinned image `sse-steam-1-7-104` (measured SHA-256 equals the pin in the "Target build id / image SHA-256" line above) and the operator's owned shader package, with generated CrashLogger name and type records from `origin/main` and Microsoft's Direct3D 11 documentation. Method: the reviewer decoded targeted native ranges independently, scanned a saved full listing for references, re-extracted the shader package and decoded its five distinct group 2 programs, and checked synthetic binary32 arithmetic and the Direct3D 11 rules. This is a static finding review. It is not match evidence for any function and it does not decide transfer eligibility (`docs/clean-room.md`).

The observations above already include the corrected text. The evidence addresses were extended where the review asked.

| Group | Verdict | One-line status |
|---|---|---|
| G16 | Corrected | 960 counts draw-group slots. Eligible excess slots submit and read zero. The in-range unwritten tail has undefined contents. |
| G17 | Corrected | Three direct stores and the fog selector are verified. The active value in a retail exterior frame is unverified. |
| G09 | Confirmed | Both paths add nine binary32 weights in storage order and multiply once by the stored reciprocal. Ordered equality keeps the weights. |
| G10 | Confirmed | The strict weighted-byte and base-residual gates agree with the merged correction. |
| G18 | Observations 1, 3, 4 confirmed; observation 2 corrected | Slot index, vertex product and pixel use confirmed. The CPU value is corrected for the timer slot, the zero first publish and the disabled-fade path. |

G18 was added on 2026-11-21 after a separate review by a second fresh-context GPT 6.2 Sol run (`gpt-6.2-sol` via Codex, high effort), which did not author the G18 draft. Its verdicts: observation 1 confirmed, observation 2 corrected, observations 3 and 4 confirmed. The review is static and is not match evidence.

Summary: 2 groups confirmed (G09, G10) and 2 corrected (G16, G17). G18 has three confirmed observations (1, 3, 4) and one corrected observation (2). No group was rejected.

## Reviewer and outcome

Reviewed independently on 2026-11-21 by GPT 6.2 Sol (Codex, high effort, fresh context), separate from author MR-3. G18 was reviewed by a second fresh GPT 6.2 Sol run, separate from its draft author. Outcome: G09 and G10 confirmed, G16 and G17 corrected, G18 observations 1, 3 and 4 confirmed and observation 2 corrected, 0 rejected. G18 supersedes the merged G18 wording "per-instance" and the earlier "separate per-instance factor" statement in the merged review text. Static only. A review verdict is not match evidence, and transfer eligibility is not decided. Unverified: the active output scale in a retail exterior frame, retail scene appearance and reachability beyond the 960 cap, and the visual effect of any G18 draw past the uploaded prefix.
