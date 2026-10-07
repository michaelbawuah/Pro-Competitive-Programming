# KEYENCE building

[Original problem](https://atcoder.jp/contests/abc227/tasks/abc227_b) · [C++ solution](../../solutions/atcoder/implementation/abc227_b_keyence_building.cpp)

## Try first

Enumerate all positive side pairs whose expression is at most 1000.

## Reasoning

Enumerate all positive side pairs whose expression is at most 1000. The expression increases in either coordinate, making both loop cutoffs exhaustive. Count unmarked submitted values.

## Cost

- Time: **O(M^2+n), M=1000**.
- Extra space: **O(M)**.

## C++ takeaway

vector<bool> stores packed flags and returns a proxy on indexed access. Assign flags through indexing instead of trying to bind a bool& to an element.

## Watch for

Initialize every flag and preserve the distinction between a zero-based position and a one-based label.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
