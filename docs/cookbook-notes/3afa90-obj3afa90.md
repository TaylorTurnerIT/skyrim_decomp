# 0x3afa90 Obj3afa90::Function3afa90

<!-- tags: wall/register-schedule, construct/loop -->

- Function: 0x3afa90 Obj3afa90::Function3afa90
- Label: none
- Outcome: unsolved
- Cause: register-allocation
- Best score: 147/147 bytes (44/44 instructions)
- Attempts: 6

## What differed

The generated function had the target size and instruction count exactly, with identical control flow and loop structure. Only two volatile temporary registers used for the loop counter and upper bound stayed swapped across the loop header and exit check.

## Spellings tried that did not help

- Switching the loop counter and bound between signed and unsigned 32-bit integers.
- Hoisting the array length into a local before the loop versus reading the member in the loop condition.
- Changing early-exit `break` spelling to a boolean flag checked in the loop header.
- Extracting the inner element test into an inline helper method.

## Spelling that fixed it

none
