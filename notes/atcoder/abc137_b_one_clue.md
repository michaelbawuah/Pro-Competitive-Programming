# One Clue

[Original problem](https://atcoder.jp/contests/abc137/tasks/abc137_b) · [C++ solution](../../solutions/atcoder/implementation/abc137_b_one_clue.cpp)

## Try first

A length-K block containing X can extend at most K-1 positions in either direction.

## Reasoning

A length-K block containing X can extend at most K-1 positions in either direction. Every coordinate in that union is achieved by some such block.

## Cost

- Time: **O(K)**.
- Extra space: **O(1)**.

## C++ takeaway

Initialize state before the scan and update it once per input element. Read a range-loop variable by reference when filling a container.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
