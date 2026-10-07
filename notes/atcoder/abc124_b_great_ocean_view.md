# Great Ocean View

[Original problem](https://atcoder.jp/contests/abc124/tasks/abc124_b) · [C++ solution](../../solutions/atcoder/implementation/abc124_b_great_ocean_view.cpp)

## Try first

A mountain has a sea view precisely when its height is at least the maximum height preceding it.

## Reasoning

A mountain has a sea view precisely when its height is at least the maximum height preceding it. Equality is allowed.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Initialize state before the scan and update it once per input element. Read a range-loop variable by reference when filling a container.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
