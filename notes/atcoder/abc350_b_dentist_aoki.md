# Dentist Aoki

[Original problem](https://atcoder.jp/contests/abc350/tasks/abc350_b) · [C++ solution](../../solutions/atcoder/implementation/abc350_b_dentist_aoki.cpp)

## Try first

Every treatment toggles the occupancy of one hole.

## Reasoning

Every treatment toggles the occupancy of one hole. Start all holes occupied, apply the toggles, and count the remaining occupied holes.

## Cost

- Time: **O(N+Q)**.
- Extra space: **O(N)**.

## C++ takeaway

vector<bool> stores packed flags and returns a proxy on indexed access. Assign flags through indexing instead of trying to bind a bool& to an element.

## Watch for

Initialize every flag and preserve the distinction between a zero-based position and a one-based label.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
