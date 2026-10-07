# Integer Sum

[Original problem](https://atcoder.jp/contests/abc272/tasks/abc272_a) · [C++ solution](../../solutions/atcoder/implementation/abc272_a_integer_sum.cpp)

## Try first

Maintain the sum of the values already read.

## Reasoning

Maintain the sum of the values already read. Adding every input once yields the requested total.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
