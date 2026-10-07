# ABC-DEF

[Original problem](https://atcoder.jp/contests/abc275/tasks/abc275_b) · [C++ solution](../../solutions/atcoder/implementation/abc275_b_abc_def.cpp)

## Try first

Reduce each factor before multiplying and reduce after every multiplication.

## Reasoning

Reduce each factor before multiplying and reduce after every multiplication. Products of two reduced factors fit in signed 64-bit arithmetic; normalize the final modular difference to be nonnegative.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
