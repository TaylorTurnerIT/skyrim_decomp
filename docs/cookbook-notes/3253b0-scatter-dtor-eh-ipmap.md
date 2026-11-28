# 0x3253b0 Obj3253b0::dtor

<!-- tags: abi/exception, construct/destructor, construct/loop -->

- Function: 0x3253b0 Obj3253b0::dtor
- Label: GUESS(low)
- Outcome: unsolved
- Cause: other (EH state-table IP map count mismatch)
- Best score: 131/131 (aligned_matching_bytes; failed on EH FuncInfo IP map count)
- Attempts: 3

## What differed

All 131 compiled code bytes agreed on the first attempt (also shared by twin `0x32aa70`), including the bucket teardown loop and deallocation call, but the comparator rejected the exception-handling metadata because the generated C++ EH `FuncInfo` IP-to-state map entry count differed from the target.

## Spellings tried that did not help

- Destructor body looping over buckets and calling element teardown plus buffer free with a non-trivial member subobject to emit C++ EH state setup: 131/131 aligned bytes, `FuncInfo.n_ip_map` differed.
- Moving the bucket loop into an inline helper destructor on a base subobject: changed EH state count and code layout.
- Splitting the deallocation step into a second member destructor: changed unwind state transitions without reaching the target IP map count.

## Spelling that fixed it

none
