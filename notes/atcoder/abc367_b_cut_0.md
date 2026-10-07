# Cut .0

[Original problem](https://atcoder.jp/contests/abc367/tasks/abc367_b) · [C++ solution](../../solutions/atcoder/implementation/abc367_b_cut_0.cpp)

## Try first

The input has exactly three decimal places.

## Reasoning

The input has exactly three decimal places. Remove trailing fractional zeros, then remove the decimal point only if no fractional digits remain; the integer part is preserved even for zero.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
