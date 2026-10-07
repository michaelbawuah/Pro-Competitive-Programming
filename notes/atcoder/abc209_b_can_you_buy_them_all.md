# Can you buy them all?

[Original problem](https://atcoder.jp/contests/abc209/tasks/abc209_b) · [C++ solution](../../solutions/atcoder/implementation/abc209_b_can_you_buy_them_all.cpp)

## Try first

Apply the one-yen discount only to even one-based indices, sum the actual prices, and compare with the budget.

## Reasoning

Apply the one-yen discount only to even one-based indices, sum the actual prices, and compare with the budget.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
