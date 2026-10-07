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

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
