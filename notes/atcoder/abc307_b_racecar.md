# racecar

[Original problem](https://atcoder.jp/contests/abc307/tasks/abc307_b) · [C++ solution](../../solutions/atcoder/implementation/abc307_b_racecar.cpp)

## Try first

Try every ordered pair of distinct indices because concatenation order matters.

## Reasoning

Try every ordered pair of distinct indices because concatenation order matters. A concatenation is a palindrome exactly when it equals its reverse.

## Cost

- Time: **O(n^2 L)**.
- Extra space: **O(nL)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
