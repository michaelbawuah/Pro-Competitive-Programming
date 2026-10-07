# Fennec vs Monster

[Original problem](https://atcoder.jp/contests/abc153/tasks/abc153_c) · [C++ solution](../../solutions/atcoder/greedy/abc153_c_fennec_vs_monster.cpp)

## Try first

A special move saves exactly the chosen monster health in attacks.

## Reasoning

A special move saves exactly the chosen monster health in attacks. Spend up to K special moves on the largest health values, then sum the rest.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::sort rearranges a vector in place. Retain original indices before sorting when the output must preserve input order; use long long when accumulating costs.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
