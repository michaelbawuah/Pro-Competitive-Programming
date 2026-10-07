# Papers, Please

[Original problem](https://atcoder.jp/contests/abc155/tasks/abc155_b) · [C++ solution](../../solutions/atcoder/implementation/abc155_b_papers_please.cpp)

## Try first

Reject only an even number divisible by neither three nor five.

## Reasoning

Reject only an even number divisible by neither three nor five. Odd numbers impose no restriction.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
