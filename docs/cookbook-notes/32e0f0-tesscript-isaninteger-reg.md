# 0x32e0f0 TESScript::IsAnInteger

<!-- tags: construct/loop, wall/register-schedule -->

- Function: 0x32e0f0 TESScript::IsAnInteger
- Label: CRASHLOGGER_PDB(59818@2026.10.24)
- Outcome: unsolved
- Cause: register-allocation
- Best score: 80/80 (exact extent; single register copy choice differed)
- Attempts: 4

## What differed

The candidate had the exact 80-byte extent and instruction sequence for scanning an optional leading sign followed by ASCII digits, except the compiler chose a different scratch register when saving the incoming string pointer before the loop.

## Spellings tried that did not help

- Indexing `text[i]` with a 32-bit signed loop counter after checking the optional leading minus sign: exact 80-byte extent, register assignment differed on the incoming pointer copy.
- Advancing a `const char*` cursor directly (`for (const char* p = text; *p != 0; ++p)`): altered loop addressing without reaching the register allocation.
- Checking `text == nullptr || text[0] == 0` in one condition versus nested `if` blocks: changed branch layout slightly while keeping the register mismatch.
- Tracking `bool valid` instead of returning early on non-digit characters: increased size past 80 bytes.

## Spelling that fixed it

none
