# Alternately

[Original problem](https://atcoder.jp/contests/abc296/tasks/abc296_a) · [C++ solution](../../solutions/atcoder/implementation/abc296_a_alternately.cpp)

## Try first

Alternation is equivalent to every adjacent character pair being different.

## Reasoning

Alternation is equivalent to every adjacent character pair being different. Check all neighboring pairs; a one-person row satisfies the condition vacuously.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
