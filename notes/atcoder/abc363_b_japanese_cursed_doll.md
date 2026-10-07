# Japanese Cursed Doll

[Original problem](https://atcoder.jp/contests/abc363/tasks/abc363_b) · [C++ solution](../../solutions/atcoder/implementation/abc363_b_japanese_cursed_doll.cpp)

## Try first

Equal daily growth preserves the ordering of hair lengths.

## Reasoning

Equal daily growth preserves the ordering of hair lengths. At least P people reach T exactly when the P-th largest initial length plus the elapsed days reaches T; clamp the required days at zero.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Sorting changes element positions. Store an original index alongside each value when the answer refers to input positions, and make any tie-break explicit in the ordering.

## Watch for

Check repeated values and ties; a rank by occurrence differs from a rank by distinct value.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
