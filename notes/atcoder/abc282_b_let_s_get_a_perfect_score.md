# Let's Get a Perfect Score

[Original problem](https://atcoder.jp/contests/abc282/tasks/abc282_b) · [C++ solution](../../solutions/atcoder/implementation/abc282_b_let_s_get_a_perfect_score.cpp)

## Try first

Enumerate each unordered participant pair once.

## Reasoning

Enumerate each unordered participant pair once. It succeeds exactly when every problem position has an o in at least one of the two strings.

## Cost

- Time: **O(N^2 M)**.
- Extra space: **O(NM)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
