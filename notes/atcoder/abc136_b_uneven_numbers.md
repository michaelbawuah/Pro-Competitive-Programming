# Uneven Numbers

[Original problem](https://atcoder.jp/contests/abc136/tasks/abc136_b) · [C++ solution](../../solutions/atcoder/implementation/abc136_b_uneven_numbers.cpp)

## Try first

Enumerate the bounded range and count numbers whose decimal representation has odd length..

## Reasoning

Enumerate the bounded range and count numbers whose decimal representation has odd length.

## Cost

- Time: **O(N log N)**.
- Extra space: **O(log N)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
