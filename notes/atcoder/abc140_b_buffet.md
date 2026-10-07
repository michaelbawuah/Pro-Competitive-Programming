# Buffet

[Original problem](https://atcoder.jp/contests/abc140/tasks/abc140_b) · [C++ solution](../../solutions/atcoder/implementation/abc140_b_buffet.cpp)

## Try first

Every dish is eaten once, so all base scores contribute.

## Reasoning

Every dish is eaten once, so all base scores contribute. Add a bonus only for consecutive eaten dishes whose identifiers rise by exactly one.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Initialize state before the scan and update it once per input element. Read a range-loop variable by reference when filling a container.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
