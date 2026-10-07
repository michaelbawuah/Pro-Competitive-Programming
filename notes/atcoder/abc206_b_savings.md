# Savings

[Original problem](https://atcoder.jp/contests/abc206/tasks/abc206_b) · [C++ solution](../../solutions/atcoder/implementation/abc206_b_savings.cpp)

## Try first

Accumulate daily deposits in chronological order until the first total meeting the target.

## Reasoning

Accumulate daily deposits in chronological order until the first total meeting the target. Positive deposits make the first such day minimal.

## Cost

- Time: **O(sqrt(N))**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
