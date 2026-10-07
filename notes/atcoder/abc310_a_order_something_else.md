# Order Something Else

[Original problem](https://atcoder.jp/contests/abc310/tasks/abc310_a) · [C++ solution](../../solutions/atcoder/implementation/abc310_a_order_something_else.cpp)

## Try first

There are two useful choices: buy the drink alone at P, or use the coupon with the cheapest available dish.

## Reasoning

There are two useful choices: buy the drink alone at P, or use the coupon with the cheapest available dish. More expensive dishes cannot improve the coupon total.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
