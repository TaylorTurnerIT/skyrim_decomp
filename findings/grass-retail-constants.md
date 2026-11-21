# Finding: grass generation, fade and shading constants

Status: OBSERVED (values and rules read in the pinned image, its shipped shaders and INIs, unless marked agent-reported); HYPOTHESIS where marked inferred. Function names are GUESS.
Author / human operator: eclepso
AI assistance / model: claude-opus-5-5 (analysis and fact-check); DeepSeek V4.1 Flash worker drafts, re-checked where marked verified
Date (UTC): 2026-11-20
Target build id / image SHA-256: `sse-steam-1-7-104` (hash pinned in `builds/target.json`)
Function RVA / size (if applicable): 0x209020 (2912), 0x2afb20 (2131), 0x208f60 (82), 0x1523440 (322); also cited: 0x2067f0, 0x206d40, 0xce4460, 0xce44e0, 0x1522870
Source exposure: mixed (binary-analysis of the pinned image; the shipped shader bytecode, INIs and Skyrim.esm; for comparison only, Mudcrab's grass code and its published audit of the MIT-licensed spud engine. No FNV or Fallout 4 sibling source was used.)
Sources and immutable revisions / licenses: the pinned image and the operator's own retail install; no third-party code reproduced
Name provenance: GUESS
Confidence: reviewed 2026-11-20 (see "Independent review"); high where marked verified; medium where agent-reported; inferred items are stated as such

Addresses are VAs in the pinned image (base `0x140000000`). Values and rules only: no recovered
implementation or line-by-line translation is included. Intended reader: Mudcrab's grass labels
(Mudcrab-Team/mudcrab#824 and its retail-facts registry). Any transfer still needs the boundary
review in `docs/clean-room.md`.

Tags: **verified** = re-read by the operator at the source; **agent-reported** = from a worker draft
and not independently re-read.

## Question and method

Which grass constants and rules does the retail game use, so that a reimplementation can label each
of its own grass constants as retail or not? Method: static reading of the grass manager, per-cell
generator, per-layer instancer, layer record filler and grass shader setup in the pinned image;
reading the retail grass vertex and pixel shader bytecode; reading setting defaults and the shipped
INIs. Worker drafts were re-checked by the operator, and each item says which parts were re-read.

## Observations

### <a id="g01"></a>G01. Grass settings: compiled defaults and shipped values (verified)

| Setting | Compiled default | Shipped override | Effective |
|---|---|---|---|
| iMinGrassSize | 20 | none | 20 |
| fGrassStartFadeDistance | 7000 | presets Low 1000, Medium 2300, High 7000, Ultra 7000 | 7000 (High/Ultra) |
| fGrassFadeRange | 1000 | none | 1000 |
| iGrassCellRadius | 2 | none | 2 |
| fGrassMinStartFadeDistance | 400 | `Skyrim_Default.ini` 0 | 0 |
| fGrassMaxStartFadeDistance | 7000 | `Skyrim_Default.ini` 7000 | 7000 |
| fGrassWindMagnitudeMin / Max | 5 / 125 | none | 5 / 125 |
| fTexturePctThreshold | 0.0 | none | 0.0 |
| iMaxGrassTypesPerTexure | 2 | none | 2 |
| bDrawShaderGrass | 1 | none | 1 |
| bAllowCreateGrass | 1 | `Skyrim_Default.ini` 1 | 1 |
| bAllowLoadGrass | 0 | `Skyrim_Default.ini` 0 | 0 |
| bGenerateGrassDataFiles | 0 | none | 0 |
| bEnableGrassFade | 1 | none | 1 |
| fWindGrassMultiplier:Display | 1.0 | none | 1.0 |
| fShadowClampValue:Display | 0.3 | none | 0.3 |

Evidence: setting value fields `0x142079430` (iMinGrassSize), `0x1420793e8`, `0x142079400`,
`0x142079478`, `0x1420793b8`, `0x1420793d0`, `0x142079460`, `0x142079448`, `0x14207b8b0`,
`0x14207b898`, `0x1420793a0`, `0x1420794a8`, `0x1420794c0`, `0x142079490`, `0x1420794f0`,
`0x1420d6d30`, `0x1420d6d48`; shipped INI files of the pinned install.

### <a id="g02"></a>G02. Grass on/off gate (verified)

Grass is enabled only when `bDrawShaderGrass` is set and
`fGrassStartFadeDistance >= fGrassMinStartFadeDistance + 0.5`. The test is re-run when the setting
changes. Evidence: `0x14020693b`–`0x140206967`, repeated in `0x140208c20`–`0x140208c59`.

### <a id="g03"></a>G03. Fade end and effective fade start (verified)

`fadeEnd = fGrassStartFadeDistance + fGrassFadeRange`, clamped to `uGridsToLoad * 4096`
(20480 at uGridsToLoad 5, so the defaults are not clamped). The fade start handed to the grass
shaders is `min(fadeEnd, fGrassStartFadeDistance)`. Evidence: `0x140206a4e`–`0x140206a94`
(repeated in `0x140208c60`–`0x140208ca6`); shader fade-start writer `0x140208f60`.

### <a id="g04"></a>G04. iMinGrassSize is a raw divisor (verified)

iMinGrassSize is used directly as a divisor with no lower clamp (0 would divide by zero).
Evidence: `0x140206aa8`–`0x140206ab7`.

### <a id="g05"></a>G05. Candidate grid per 256-unit tile (verified)

Tiles are 256 units on a side. Candidates per axis:
`n = min(trunc(256 / positionRange), trunc(256 / iMinGrassSize))`; with the defaults (32, 20)
n = 8. The minimum uses an unsigned comparison of the two truncated values, which gives these edge
cases:
- positionRange = 0: 256/0 truncates to 0, so n = 0 and the grass type places nothing.
- positionRange < 0: the negative quotient compares as a huge unsigned value, so n is the
  iMinGrassSize cap (12 at the default 20).

Evidence: `0x1402090d4`–`0x14020910e`. The edge cases are read from the conversion and compare in
that range (medium-high: the semantics are inferred from the instruction behaviour).

### <a id="g06"></a>G06. Random source and per-cell seed (verified, partly agent-reported)

One process-wide Mersenne-Twister variant serves grass. Its twist mixes neighbours with a `% 624`
index (not the textbook split loop) and uses twist constant `0x9908B0DF` and the standard tempering
masks (verified). Initialisation multiplier 1812433253 and the first draw from word 623 are
agent-reported. Before generating a cell the generator is re-seeded with the 32-bit product of the
two cell coordinates (verified: product of the two values; that they are cell X and Y is
agent-reported). Draw scales: `r * 2^-31 - 1` for a signed unit, `r * 2^-33` for the colour factor,
and a 15-bit draw (0..32767) for acceptance. Evidence: draw `0x140ce44e0` (twist constant
`0x140ce45a1`, modulo `0x140ce455e`, `0x140ce4587`, `0x140ce45e6`, masks `0x140ce4600`,
`0x140ce460f`), seed `0x140ce4460`, re-seed `0x140206eb2`–`0x140206ec5`.

### <a id="g07"></a>G07. Sixteen grass slots per cell pass (verified)

The per-cell generator builds an array of 16 grass slots and passes 16 as the collector's maximum,
so at most 16 grass entries are generated per pass. Evidence: `0x140206e98`–`0x140206eb0`,
`0x140206fc4`–`0x140206fdc`.

### <a id="g08"></a>G08. Texture support test: nine samples and the 25/255 floor (verified)

Each layer is tested on nine samples of the 17×17 per-quadrant blend grid (stride 17, 289 per
layer): the centre and offsets −18, −17, −16, −1, +1, +16, +17, +18. A layer is skipped unless
at least one of the nine coverage bytes is greater than 25 (out of 255). Evidence: offsets
`0x1402afccc`–`0x1402afdda`, grid stride `0x1402afed1`, floor `0x1402afef2`–`0x1402affc2`.

### <a id="g09"></a>G09. fTexturePctThreshold handling (verified)

T is first clamped to `max(T, 0)`, and a value above 1 becomes 0.9. Each sample contributes only if
its percentage is greater than T; if the mean of the nine samples is below T the layer is dropped.
At the shipped T = 0 both tests pass for any non-zero coverage. Evidence: clamp
`0x1402afb4f`–`0x1402afb78` (0.9 at `0x141820e24`), mean-of-nine `0x1402afe0d`–`0x1402afe62`.

### <a id="g10"></a>G10. Density per corner (verified)

A corner's acceptance weight is `density * 0.01` when its coverage byte is greater than
`trunc(T * 255)`, else 0. Evidence: `0x1402b00e7`–`0x1402b0126` (0.01 at `0x141b5bdd0`, 255 at
`0x141b5bf6c`).

### <a id="g11"></a>G11. Per-candidate acceptance (verified)

`v = trunc(bilinear(corner weights) * 32768 * 1.0)` (the 1.0 is a field the caller hard-codes). If
v is 0 the candidate is rejected without drawing; otherwise it is accepted when a 15-bit draw
(0..32767) is less than v. Evidence: `0x140209332`–`0x140209363` (32768 at `0x1417ff7e0`).

### <a id="g12"></a>G12. Position jitter (verified)

Each accepted candidate draws x and then y offsets of `(r * 2^-31 - 1) * (spacing / 2)` around its
cell centre, where spacing = 256 / n. Evidence: half-spacing `0x1402091e1`–`0x1402091f3`, offsets
`0x140209393`–`0x1402093e8`.

### <a id="g13"></a>G13. Slope limits (verified index, agent-reported table content)

Minimum and maximum slope in degrees index a 512-entry table built at runtime:
`index = trunc(deg * 1.4222222) & 511` (512/360; values past 360 wrap). The surface normal's z is
accepted when `table[max] <= n.z <= table[min]`. The table is a cosine table (inferred from its use;
not read). Evidence: `0x140209141`–`0x14020918d` (1.4222222 at `0x1417ff7d4`), test
`0x1402096a3`–`0x1402096b6`.

### <a id="g14"></a>G14. Instance colour scale (verified)

`lum = 0.31 R + 0.37 G + 0.32 B` of the landscape colour at the sample (0..1);
`f = (r * 2^-33 - 0.25) * colorRange + (1 - colorRange)` with a full 32-bit draw r;
`x = lum * f`; if `x >= 1.0` the stored value is 0.99, otherwise `max(x, 0)`. Values in
[0.99, 1.0) are kept unchanged; this is not a [0, 0.99] clamp. Evidence: `0x1402096bd`–`0x140209739`
(0.31 `0x1417ff7c8`, 0.37 `0x1417ff7cc`, 0.32 `0x141b5be08`, 2^-33 `0x1417ff7c0`, 0.25 `0x141b5be00`,
0.99 `0x1417ff7d0`).

### <a id="g15"></a>G15. Water placement modes (verified bound)

The grass type's water mode selects one of six tests (0..5). A mode greater than 5 skips the water
test entirely and continues to the slope test, so it places grass without a water constraint.
Evidence: switch `0x14020951b`–`0x140209535`, out-of-range target `0x14020967f`. The meaning of each
of the six modes is agent-reported (band above, band below, inside, outside).

### <a id="g16"></a>G16. 960 instances per grass geometry (verified)

Before upload, each grass geometry's instance count is clamped to 960; the excess is not drawn (no
re-batching was seen, agent-reported). Evidence: `0x141522f1c`–`0x141522f29`,
`0x141523455`–`0x141523460`.

### <a id="g17"></a>G17. Grass shading: ambient factor 1.0 (verified)

Lit grass pixels compute
`rgb = (NdotL * C * sunColour * T * shadow + C * ambient * T) * outScale`, with
`shadow = mask + fShadowClampValue * (1 - mask)`. The ambient term has an implicit factor of 1.0 and
is not shadowed; no grass vertex or pixel shader contains 1/π. `outScale` is a per-pass constant
applied to the whole colour (exists: verified; value about 0.8333: agent-reported). Evidence: grass
PS bodies in the retail shader package (shaders011 PS 30–47), CPU constant setup `0x141522870`.

### <a id="g18"></a>G18. Distance fade (verified)

Per vertex: `fade = 1 - saturate((d - fadeStart) / fadeRange)`, where d is the length of the
clip-space position's xyz before the perspective divide. In the alpha-tested pixel shaders the fade
multiplies the texture alpha inside the alpha test (`tex.a * fade < cutoff` discards); it never
scales colour or output alpha. The opaque variants ignore it. Evidence: grass VS 00012 of the retail
shader package; PS 37–47.

### <a id="g19"></a>G19. Layout constants (mixed)

- 17×17 blend grid per layer, 289 samples (verified, stride above); 4096-unit cells (verified,
  constant used by the instancer `0x1417ff7dc`); 2048-unit quadrants, each 8 by 8 tiles (agent-reported; confirmed in the review below).
- Layers per quadrant: five weighted layers plus the base (agent-reported).
- iMaxGrassTypesPerTexure is applied after adding a type (agent-reported).
- Per-instance encoding: retail stores the rotation basis (from `s = r * 2^-31 - 1`,
  `c = +sqrt(1 - s^2)`) and a half-float scale offset `rand(-1, 1) * heightRange` used as
  `1 + v * expansion` in the vertex shader (agent-reported).

## Independent review (2026-11-20)

Reviewer: GPT 6.2 Sol (`gpt-6.2-sol`) through Codex, high effort, fresh context. The reviewer did not
author or draft this finding. The review was started and recorded by the skyrim-research department
lead (Claude Sonnet 5.5), which also did not draft the finding. Date: 2026-11-20 (CST).
Source reviewed: this file at `bbd2e62634` (#558), against the pinned image `sse-steam-1-7-104`
(measured SHA-256 equals the pin in `builds/target.json`), the shipped shader package and the five
shipped INIs, all from the operator's own install. Method: the agent-reported claims were traced first,
then each group was re-checked against native listings, PE fields, the INIs and decoded Direct3D shader
bytecode. This is a static finding review. It is not match evidence for any function and it does not
decide transfer eligibility (`docs/clean-room.md`).

Where the corrected text below differs from an observation above, the corrected text applies. The
evidence addresses in the observations above are kept.

| Group | Verdict | One-line status |
|---|---|---|
| g01 | Confirmed | Compiled defaults and the five shipped INIs agree. |
| g02 | Corrected | The enable refresh adds a caller flag; a fade-setting write bypasses the gate. |
| g03 | Corrected | The fade writer scales both endpoints before deriving the shader range. |
| g04 | Confirmed | The divisor is unclamped and the division is floating point. |
| g05 | Corrected | Tiles are 256 units at shipped granularity; some negative ranges give a zero grid. |
| g06 | Corrected | Multiplier, first draw and cell seed hold; twist and full-width draw need clarification. |
| g07 | Corrected | The 16-record cap applies per tile collector call. |
| g08 | Corrected | The nine-sample floor applies to weighted layers; the base layer uses residual coverage. |
| g09 | Corrected | The mean test uses density weights and clears them on failure. |
| g10 | Corrected | Weighted layers use a byte threshold; the base layer uses residual coverage. |
| g11 | Confirmed | A signed threshold gates the 15-bit draw before jitter. |
| g12 | Confirmed | X is drawn before Y; the surface query uses half-float-rounded coordinates. |
| g13 | Confirmed | A runtime initializer supplies a 512-entry cosine table. |
| g14 | Corrected | The formula applies before half-float packing. |
| g15 | Corrected | All six water tests recovered and inclusive; the unsigned guard also skips negative modes. |
| g16 | Corrected | The 960 cap limits the fade-factor upload; the traced draw uses the full geometry count. |
| g17 | Corrected | The output-scale global starts near 0.8333 and is mutable; the fallback is 1.0. |
| g18 | Corrected | Distance fade is combined with a per-instance factor; depth variants write the resulting alpha. |
| g19 | Corrected | Quadrant size and encoding hold; layer capacity and type-limit wording corrected. |

Summary: 5 groups confirmed (g01, g04, g11, g12, g13) and 14 corrected (g02, g03, g05 to g10, g14 to
g19). No group was rejected. The agent-reported items in g06, g13, g15, g16, g17 and g19 were re-derived;
the corrections for g15 (all six water tests, inclusive), g16 (cap scope), g17 (output scale source) and
g19 (layer capacity, type limit) change the earlier claims.

## Corrected statements

### G01 — Effective values

Label the last column **Effective with shipped INI inputs**. The start-fade value in that column applies to the High and Ultra presets. Low and Medium supply the values shown in the preset column.

### G02 — Grass on/off gate

Initialization enables shader grass only when `bDrawShaderGrass` is set and `fGrassStartFadeDistance >= fGrassMinStartFadeDistance + 0.5`. The enable refresh also requires a caller flag. The traced fade-start setting write recalculates the fade endpoints without re-running the enable gate.

### G03 — Fade endpoints and shader range

The CPU caps the sum of `fGrassStartFadeDistance` and `fGrassFadeRange` at `uGridsToLoad × 4096`. The cap is 20480 at `uGridsToLoad = 5`, above the default sum of 8000. The effective start is the lesser of the capped end and the configured start. The fade writer scales both endpoints by a separate float whose compiled value is `1.0`. The shader receives the scaled start and the scaled end minus the scaled start.

### G04 — Grass size divisor

`iMinGrassSize` is an unclamped floating-point divisor. The result is converted to an integer.

### G05 — Candidate grid

Tiles are 256 units wide at the shipped granularity. Divide the tile width by the form’s position range and by `iMinGrassSize`. The code truncates both quotients to signed 64-bit integers, then selects the lesser of their low 32 bits using an unsigned comparison. A GRAS record initializes position range to `32` and can load a different value. With range `32` and `iMinGrassSize = 20`, the grid has 8 candidates per axis.

With invalid floating-point exceptions masked, a zero position range produces an invalid conversion whose low word is zero. A zero grid skips candidate generation. A negative quotient selects the grass-size cap when its converted low word exceeds the cap. A negative quotient between −1 and 0 truncates to zero.

### G06 — Random source and cell seed

Grass uses a shared Mersenne-Twister variant with initialization multiplier `1812433253`. The first nonzero-bound draw after an explicit reseed takes state word 623. Before generating an exterior cell, the generator reseeds with the low 32 bits of cell X times cell Y.

The twist reduces the next state word’s value modulo 624 and separately wraps the state index offset by 397. It uses twist constant `0x9908B0DF` and the standard effective tempering masks. The draw cursor also wraps modulo 624. Full-width grass calls use remainder modulo `4294967295`, which maps the maximum raw word to zero. The signed-unit conversion is `r × 2^-31 − 1`, and the colour factor uses `r × 2^-33`. Acceptance uses a masked 15-bit draw from 0 through 32767.

### G07 — Sixteen records per tile collector call

The per-cell generator passes a capacity of 16 records to the collector for each tile. The generator reuses the same array across tiles and quadrants.

### G08 — Weighted-layer coverage floor

Each weighted layer tests nine coverage bytes from its 17 by 17 per-quadrant blend grid. The offsets from the centre are −18, −17, −16, −1, 0, +1, +16, +17, and +18. The layer proceeds only when at least one byte exceeds 25. The base layer uses residual coverage.

### G09 — Texture threshold and mean

For finite settings, `T` is floored at zero. A value above 1 becomes 0.9. The weighted and base paths gate each sample as described in G10. Each path then compares the mean of nine resulting density weights with `T`. A mean below `T` clears all nine weights and preserves the record. At the shipped `T = 0`, a mean of zero passes. The weighted-layer coverage floor also applies.

Base residual coverage is one minus the sum of the first five weighted coverage bytes multiplied by the stored `1/255` factor.

Superseded or clarified by findings/grass-retail-leftovers.md (independently reviewed 2026-11-21).

### G10 — Density per sample

A weighted sample gets `density × 0.01` when its coverage byte exceeds `trunc(T × 255)`. A base sample gets the same weight when its floating residual coverage exceeds `T`. A sample that fails its threshold gets zero.

### G11 — Acceptance threshold

The caller sets the multiplier to `1.0`. The instancer scales the bilinear weight by 32768 and this multiplier, then truncates it. It rejects a zero low word without drawing. Otherwise it accepts when the 15-bit draw is less than the signed low word. The comparison precedes position jitter.

### G12 — Position jitter

Each accepted candidate draws its X offset and then its Y offset. The signed-unit draw scales by half the candidate spacing. At shipped granularity the spacing is `256 / n`. The coordinates pass through half-float conversion before the surface query.

### G13 — Slope limits

The slope bounds use a runtime table of 512 cosine values. The initializer accumulates a float32 step of about `2π / 512` radians. The slope lookup multiplies degrees by the stored float32 value `1.4222221374511719`, truncates the result, and masks the index with 511. For finite operands, the normal’s Z component must be at least the value indexed by the maximum slope and at most the value indexed by the minimum slope.

### G14 — Instance colour scale

The weighted landscape luminance is `0.31 R + 0.37 G + 0.32 B`. The colour multiplier is `(r × 2^-33 − 0.25) × colorRange + (1 − colorRange)`, using the full-width result described in G06. If the product is at least `1.0`, the pre-packing value is `0.99`. Otherwise it is the greater of the product and zero. Products in `[0.99, 1.0)` retain their value before half-float packing. Packing can round the value.

### G15 — Water placement modes

The water test uses terrain height `h`, the cell’s water reference `w`, and the grass type’s unsigned 16-bit distance `d`. For finite operands the conditions are inclusive.

| Mode | Water test passes when |
|---|---|
| 0 | `h ≥ w − d` |
| 1 | `w ≤ h ≤ w + d` |
| 2 | `h ≤ w − d` |
| 3 | `w − d ≤ h ≤ w` |
| 4 | `h ≤ w − d` or `h ≥ w + d` |
| 5 | `w − d ≤ h ≤ w + d` |

The unsigned mode guard bypasses the water test for other values, including negative signed values. The candidate still faces the slope test and other placement rules.

### G16 — Fade-factor upload capacity

Each inspected upload writes one prefix of at most 960 per-instance fade factors. The vertex shader reads 240 vectors of four factors. The traced geometry draw loop uses the full geometry count and submits eligible slots. It has no second batch for the fade-factor upload. The scene conditions and visual result for slots beyond the uploaded prefix are unverified.

Superseded or clarified by findings/grass-retail-leftovers.md (independently reviewed 2026-11-21).

### G17 — Lit grass shading and output scale

The lit grass pixel shaders add the ambient term to the direct term, then scale the combined RGB. The ambient term is `C × ambient × T`. The direct term is `NdotL × C × sunColour × T × shadow`, with `shadow = mask + fShadowClampValue × (1 − mask)`. The `RunGrass` group has no explicit `1/π` multiplier in its shader bodies.

The output scale is the fourth lane of pixel constant register `cb2[16]`. The setup sources it from a mutable global or a fallback vector with scale `1.0`. The global starts at float32 `0.8333333134651184` and can change at runtime. The evidence is zero-based group 2 of `shaders011.fxp`, with lit pixel records 0–6 and 9–15, plus the native constant setup.

Superseded or clarified by findings/grass-retail-leftovers.md (independently reviewed 2026-11-21).

### G18 — Distance fade and output alpha

The `RunGrass` vertex shader takes the length of clip-space XYZ before division by W. The distance factor is `1 − saturate((d − fadeStart) / fadeRange)`. The shader multiplies that factor by a separate per-instance factor. The range is the scaled endpoint difference from G03.

In zero-based group 2 of `shaders011.fxp`, lit alpha-tested pixel records 9–15 compare texture alpha times the combined fade with the cutoff and write output alpha `1` for surviving pixels. The four depth-style pixel records 7, 8, 16, and 17 use that product for cutoff and write it as output alpha. Opaque lit pixel records 0–6 ignore the combined fade.

Superseded or clarified by findings/grass-retail-leftovers.md (G18, independently reviewed 2026-11-21).

### G19 — Layout constants

- A cell is 4096 units wide. It contains four 2048-unit quadrants, each 8 by 8 tiles at the shipped step. Tiles are 256 units wide. Each quadrant uses a 17 by 17 blend grid with 128-unit sample spacing and 289 samples per weighted slot.
- The collector and storage allow six weighted slots plus a separate base. The loaders allow weighted index 5. The base residual uses weighted slots 0 through 4, and compaction clears slot 5. These counts describe capacity and the inspected paths.
- The collector checks the number already added before insertion and stops when it exceeds `iMaxGrassTypesPerTexure`. A setting of 2 permits up to three records per eligible texture list, subject to the shared cap of 16 per tile.
- The initial rotation basis uses the signed draw `s` and `c = +sqrt(1 − s²)`. The CPU can align the basis to the terrain normal before packing it as half-floats. It also packs a signed draw times `heightRange` as a half-float offset. The vertex shader applies `1 + offset × expansion` componentwise.

### Interpretation and examples

The open questions listed in "Interpretation and alternatives" above (cosine table, water modes, base residual, initial output scale) are answered by the corrected G09, G13, G15 and G17 statements. The active output scale depends on the runtime path. Instance counts and fade output in a retail scene remain unverified.

- G05 — With `iMinGrassSize = 20`, a position range of `32` gives 8 candidates per axis. A range of `−1` gives 12, and a range of `−512` gives zero. A zero position range gives a zero grid with invalid floating-point exceptions masked.
- G09 — A finite threshold of `1.5` becomes `0.9`, and `−0.2` becomes `0`.
- G14 — Luminance `1.0` with `colorRange = 0` gives a pre-packing result of `0.99` for any draw. A product of `0.995` remains `0.995` before half-float packing.
- G15 — Mode `6` bypasses the water test. Other placement tests still apply.

## Interpretation and alternatives

- The exact value and source of the per-pass output scale in G17.
- The base-layer residual arithmetic, if any.
- Which of the six water modes is which (G15).
- The slope table contents (G13) are inferred to be cosines from their use.

Synthetic cases that follow from the rules above:

- G05: positionRange 32, iMinGrassSize 20 → n = 8; positionRange 0 → no instances;
  positionRange −1 → n = 12.
- G09: fTexturePctThreshold 1.5 behaves as 0.9; −0.2 behaves as 0.
- G14: lum 1.0, colorRange 0, any draw → stored 0.99; x = 0.995 → stored 0.995.
- G15: water mode 6 places grass regardless of water height.
- No original-game captures are part of this specification.

## Reproduction and sanitized evidence

Generate local listings of the addresses above from your own copy of the pinned image and compare
the constants and control flow named in each item. Shader items: disassemble the retail grass
shaders from your own install. Keep listings in `.local/`.

## Negative results and limitations

- No original-game captures were made; every item is static.
- The slope table contents, the per-pass output scale value and the water-mode meanings are not
  read directly (see above).

## Reviewer and outcome

Reviewed independently on 2026-11-20 by GPT 6.2 Sol (Codex, high effort, fresh context). Outcome: 5 confirmed, 14 corrected, 0 rejected; see the review section above. Unverified: the active output scale at runtime, instance counts and the visual result in a retail scene (no captures were made).
