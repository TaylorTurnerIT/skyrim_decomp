# 0x320c80 BSTArray::erase

<!-- tags: abi/calling-convention, construct/vector, wall/register-schedule -->

- Function: 0x320c80 BSTArray::erase
- Label: GUESS(low)
- Outcome: unsolved
- Cause: prologue-epilogue
- Best score: 124/154 (all 44 instructions agree except callee-saved home-slot offsets)
- Attempts: 5

## What differed

Every instruction in the function body agrees with the target (also observed in `0x325830`, `0x3258d0`, `0x3288b0`, and `0x391170`), but the target saves its three nonvolatile registers starting at the second incoming-argument home slot instead of the first, shifting both prologue saves, epilogue restores, and unwind metadata by eight bytes.

## Spellings tried that did not help

- Explicit hidden return pointer parameter and `const` pointer-to-iterator parameter: body agreed exactly, home slots shifted low by eight bytes.
- Returning an iterator struct with a user-defined constructor by value (`Iter Erase(const Iter& pos)`): compiler used hidden return pointer, but home slots stayed eight bytes low.
- Taking the iterator by value with a copy constructor and user destructor (`Iter Erase(Iter pos)`): compiler still saved from the first home slot, and stand-in empty destructors are disallowed by review rules.
- Passing `size` through an inherited base subobject versus a plain struct member: no change to prologue home slots.

## Spelling that fixed it

none
