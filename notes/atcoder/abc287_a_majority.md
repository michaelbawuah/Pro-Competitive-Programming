# Majority

[Original problem](https://atcoder.jp/contests/abc287/tasks/abc287_a) · [C++ solution](../../solutions/atcoder/implementation/abc287_a_majority.cpp)

## Try first

Count agreeing voters.

## Reasoning

Count agreeing voters. A strict majority means twice that count exceeds the total number of voters.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
