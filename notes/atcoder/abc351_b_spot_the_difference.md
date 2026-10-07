# Spot the Difference

[Original problem](https://atcoder.jp/contests/abc351/tasks/abc351_b) · [C++ solution](../../solutions/atcoder/implementation/abc351_b_spot_the_difference.cpp)

## Try first

Compare corresponding cells in the two grids.

## Reasoning

Compare corresponding cells in the two grids. The guaranteed single mismatch gives the unique row and column, converted to one-based numbering.

## Cost

- Time: **O(n^2)**.
- Extra space: **O(n^2)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
