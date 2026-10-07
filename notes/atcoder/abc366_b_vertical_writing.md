# Vertical Writing

[Original problem](https://atcoder.jp/contests/abc366/tasks/abc366_b) · [C++ solution](../../solutions/atcoder/implementation/abc366_b_vertical_writing.cpp)

## Try first

For each original character column, read rows bottom to top, filling missing characters with stars.

## Reasoning

For each original character column, read rows bottom to top, filling missing characters with stars. Remove only trailing stars so internal alignment remains intact.

## Cost

- Time: **O(NM), M=max length**.
- Extra space: **O(total characters+N)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
