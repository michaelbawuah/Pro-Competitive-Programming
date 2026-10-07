# Coins

[Original problem](https://atcoder.jp/contests/abc087/tasks/abc087_b) · [C++ solution](../../solutions/atcoder/implementation/abc087_b_coins.cpp)

## Try first

Fix the counts of 500-yen and 100-yen coins.

## Reasoning

Fix the counts of 500-yen and 100-yen coins. The remaining amount determines the count of 50-yen coins uniquely; count it only when available.

## Cost

- Time: **O(A B)**.
- Extra space: **O(1)**.

## C++ takeaway

Initialize counters and container entries before scanning. A range-based loop with int& can read directly into a vector; a loop by value only copies each entry.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
