# Count Down

[Original problem](https://atcoder.jp/contests/abc281/tasks/abc281_a) · [C++ solution](../../solutions/atcoder/implementation/abc281_a_count_down.cpp)

## Try first

Start at N and decrement through zero, printing each value before moving to the next smaller one..

## Reasoning

Start at N and decrement through zero, printing each value before moving to the next smaller one.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
