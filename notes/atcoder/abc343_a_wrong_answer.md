# Wrong Answer

[Original problem](https://atcoder.jp/contests/abc343/tasks/abc343_a) · [C++ solution](../../solutions/atcoder/implementation/abc343_a_wrong_answer.cpp)

## Try first

The sum is a digit from zero through nine.

## Reasoning

The sum is a digit from zero through nine. Adding one modulo ten produces another valid digit that always differs from the sum.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
