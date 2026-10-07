# V

[Original problem](https://atcoder.jp/contests/abc289/tasks/abc289_b) · [C++ solution](../../solutions/atcoder/implementation/abc289_b_v.cpp)

## Try first

Edges connect only consecutive integers, so each component is a contiguous block joined by consecutive marks.

## Reasoning

Edges connect only consecutive integers, so each component is a contiguous block joined by consecutive marks. Find blocks from left to right and emit each block in descending order.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

vector<bool> stores packed flags and returns a proxy on indexed access. Assign flags through indexing instead of trying to bind a bool& to an element.

## Watch for

Initialize every flag and preserve the distinction between a zero-based position and a one-based label.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
