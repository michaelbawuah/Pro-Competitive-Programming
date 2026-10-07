# ABC Swap

[Original problem](https://atcoder.jp/contests/abc161/tasks/abc161_a) · [C++ solution](../../solutions/atcoder/implementation/abc161_a_abc_swap.cpp)

## Try first

Perform the two swaps in the specified order; the second uses the already updated first box.

## Reasoning

Perform the two swaps in the specified order; the second uses the already updated first box.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Initialize state before the scan and update it once per input element. Read a range-loop variable by reference when filling a container.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
