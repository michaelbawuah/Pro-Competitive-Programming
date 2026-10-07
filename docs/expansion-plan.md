# Expansion checkpoint

Target: **835 reference solutions** and **1,102 new commits** after the verified 100-solution checkpoint `c7318e3b91377ef90b913de8a1040c24188f501a`.

The earlier request described 737 additions from 98. The saved, verified baseline actually contains 100 solutions. Preserving the requested total of 835 therefore requires 735 additions after that baseline. No existing solutions or history are removed to change the arithmetic.

## Current checkpoint

- 300 solutions: 96 CSES, 114 Codeforces, 90 AtCoder.
- 200 additions since the 100-solution baseline.
- 508 new commits since that baseline, including this checkpoint record.
- 535 further solutions and 594 commits remain in the agreed budget.
- Each current solution has standalone C++17 code, learning notes, and checked cases.
- Full verification results and the input fingerprint are in [verification.md](verification.md).

## Continue

The ordered remaining problem list is [planned_problems.json](../data/planned_problems.json). These are **planned**, not solved or verified, and do not contribute to the catalogue count. Start with AtCoder abc100_a, abc100_b, abc101_a, and abc101_b.

For each problem, read its official statement, write the implementation and reasoning independently, add official samples and targeted edge cases, and compile/run them before committing. Use a separate test or explanation commit where there is a substantive separate change. Keep commits nonempty and use their actual creation times.

The remaining budget can accommodate 535 implementation commits, 47 additional problem-specific test or explanation commits, and 12 integration, verification, or documentation commits. Recalculate after any necessary fix; never create empty commits merely to hit the count.

Publish complete checked checkpoints, then inspect all eight Linux/GCC and macOS/Clang CI shards for the published head. Local reference tests and official judge acceptances remain separate.
