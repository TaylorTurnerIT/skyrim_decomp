# 0x3df4c0 Obj3df4c0::Function3df4c0

<!-- tags: wall/register-schedule, construct/loop, construct/destructor -->

- Function: 0x3df4c0 Obj3df4c0::Function3df4c0
- Label: none
- Outcome: unsolved
- Cause: register-allocation
- Best score: 242/242 bytes (60/60 instructions)
- Attempts: 4

## What differed

With the element count loaded into a local before the loop, the compiled function had all 60 instructions and all 242 bytes in agreement, including the prologue, epilogue, exception-handling frame, and final array teardown. Inside the deletion loop, the two non-volatile registers assigned to the cursor pointer and the loaded element pointer remained swapped.

## Spellings tried that did not help

- Pointer `for` loop with `cur = data` and `end = data + size` inline in the loop header (also flipped the zero-init order before the size load).
- Hoisting `count = size` into a local and iterating with `while (cur != end)` (242/242 bytes and the prologue load order agreed, but kept the cursor/element register swap).
- Range-based `for (Entry* entry : g_entries3df4c0)` using `begin()`/`end()` helpers.
- Computing `data + count` inside the loop condition (reloaded `data` per iteration and grew to 259 bytes).

## Spelling that fixed it

none
