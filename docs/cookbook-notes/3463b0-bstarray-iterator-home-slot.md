# 0x3463b0 Obj3463b0::VisitAll

<!-- tags: abi/calling-convention, construct/loop, construct/vector, wall/register-schedule -->

- Function: 0x3463b0 Obj3463b0::VisitAll
- Label: GUESS(low)
- Outcome: unsolved
- Cause: prologue-epilogue
- Best score: 137/137 (40 of 41 instructions agreed; single nonvolatile save home-slot offset differed)
- Attempts: 3

## What differed

Iterating the global manager's `BSTArray` with null-first `begin()` and `end()` (returning null before the data pointer when size is zero) and setting `it = end()` on a non-1 visitor result reproduced all 41 instructions in the function body. Without a user-defined destructor on the iterator, the compiler saved the nonvolatile iterator register into the first incoming-argument home slot instead of the second, causing an unwind-info mismatch.

## Spellings tried that did not help

- Raw pointer `begin()` and `end()` with `size != 0 ? data : nullptr`: inverted empty-array branch polarity and saved the nonvolatile register in the first home slot.
- Null-first `begin()` and `end()` on a member function taking an unused `this` pointer: same branch layout, still saved in the first home slot.
- Stand-in iterator with a by-value `operator!=` and no user destructor: 40 of 41 instructions agreed, still saved in the first home slot.
- Adding an empty user destructor to the stand-in iterator confirmed the home-slot shift is caused by the real `BSTArrayIterator` destructor, but that form was dropped because empty destructors on stand-in iterators are not permitted.

## Spelling that fixed it

none
