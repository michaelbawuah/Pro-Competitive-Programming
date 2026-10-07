# Commencement

[Original problem](https://atcoder.jp/contests/abc349/tasks/abc349_b) · [C++ solution](../../solutions/atcoder/implementation/abc349_b_commencement.cpp)

## Try first

Count each letter, then count how many distinct letters have each positive frequency.

## Reasoning

Count each letter, then count how many distinct letters have each positive frequency. Every such frequency class must contain either zero or two letters; absent letters are excluded.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
