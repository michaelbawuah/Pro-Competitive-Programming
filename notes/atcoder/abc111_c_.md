# /\/\/\/

[Original problem](https://atcoder.jp/contests/abc111/tasks/arc103_a) · [C++ solution](../../solutions/atcoder/implementation/abc111_c_.cpp)

## Try first

Choose one value for each position parity and require them to differ.

## Reasoning

Choose one value for each position parity and require them to differ. Only the two most frequent candidates per parity matter: if the best values clash, replacing either one with its runner-up is optimal.

## Cost

- Time: **O(n+V log V)**.
- Extra space: **O(V)**.

## C++ takeaway

std::sort rearranges a vector in place. Retain original indices before sorting when the output must preserve input order; use long long when accumulating costs.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
