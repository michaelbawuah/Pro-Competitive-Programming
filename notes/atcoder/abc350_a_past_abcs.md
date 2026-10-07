# Past ABCs

[Original problem](https://atcoder.jp/contests/abc350/tasks/abc350_a) · [C++ solution](../../solutions/atcoder/implementation/abc350_a_past_abcs.cpp)

## Try first

The statement defines a fixed historical list: contest numbers one through 349 except 316.

## Reasoning

The statement defines a fixed historical list: contest numbers one through 349 except 316. Parse the three digits and test that exact range and exclusion.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
