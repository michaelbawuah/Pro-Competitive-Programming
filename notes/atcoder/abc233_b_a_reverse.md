# A Reverse

[Original problem](https://atcoder.jp/contests/abc233/tasks/abc233_b) · [C++ solution](../../solutions/atcoder/implementation/abc233_b_a_reverse.cpp)

## Try first

The inclusive one-based interval [L,R] becomes the half-open zero-based iterator range [L-1,R).

## Reasoning

The inclusive one-based interval [L,R] becomes the half-open zero-based iterator range [L-1,R). Reverse exactly that range.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
