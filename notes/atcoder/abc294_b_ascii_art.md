# ASCII Art

[Original problem](https://atcoder.jp/contests/abc294/tasks/abc294_b) · [C++ solution](../../solutions/atcoder/implementation/abc294_b_ascii_art.cpp)

## Try first

Translate zero to a period and positive rank x to the uppercase letter at offset x-1.

## Reasoning

Translate zero to a period and positive rank x to the uppercase letter at offset x-1. Output a newline after each input row.

## Cost

- Time: **O(HW)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
