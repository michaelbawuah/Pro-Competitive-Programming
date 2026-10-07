# AtCoder Janken 2

[Original problem](https://atcoder.jp/contests/abc354/tasks/abc354_b) · [C++ solution](../../solutions/atcoder/implementation/abc354_b_atcoder_janken_2.cpp)

## Try first

Sum ratings independently of ordering, then sort usernames lexicographically.

## Reasoning

Sum ratings independently of ordering, then sort usernames lexicographically. The remainder of the total modulo N is already the required zero-based winning index.

## Cost

- Time: **O(n L log n)**.
- Extra space: **O(nL)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
