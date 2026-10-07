# Potions

[Original problem](https://atcoder.jp/contests/abc317/tasks/abc317_a) · [C++ solution](../../solutions/atcoder/implementation/abc317_a_potions.cpp)

## Try first

Potions arrive in increasing effectiveness.

## Reasoning

Potions arrive in increasing effectiveness. The first one that raises health to at least X is therefore the least effective successful potion.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
