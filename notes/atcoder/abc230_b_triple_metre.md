# Triple Metre

[Original problem](https://atcoder.jp/contests/abc230/tasks/abc230_b) · [C++ solution](../../solutions/atcoder/implementation/abc230_b_triple_metre.cpp)

## Try first

A substring of a period-three infinite string has one of three starting phases.

## Reasoning

A substring of a period-three infinite string has one of three starting phases. Compare the input against all phases modulo three.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
