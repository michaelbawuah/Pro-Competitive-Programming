# Circle Pond

[Original problem](https://atcoder.jp/contests/abc163/tasks/abc163_a) · [C++ solution](../../solutions/atcoder/implementation/abc163_a_circle_pond.cpp)

## Try first

Use circumference 2*pi*R.

## Reasoning

Use circumference 2*pi*R. acos(-1) supplies pi without relying on a nonstandard constant.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Initialize state before the scan and update it once per input element. Read a range-loop variable by reference when filling a container.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
