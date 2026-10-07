# Many Requirements

[Original problem](https://atcoder.jp/contests/abc165/tasks/abc165_c) · [C++ solution](../../solutions/atcoder/recursion/abc165_c_many_requirements.cpp)

## Try first

Generate only nondecreasing sequences by making each next value at least the previous one.

## Reasoning

Generate only nondecreasing sequences by making each next value at least the previous one. Every legal sequence appears exactly once; evaluate its rules and retain the highest score.

## Cost

- Time: **O(Q binomial(N+M-1,N))**.
- Extra space: **O(N+Q)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
