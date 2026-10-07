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

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
