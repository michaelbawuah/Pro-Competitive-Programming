# Buy One Carton of Milk

[Original problem](https://atcoder.jp/contests/abc331/tasks/abc331_b) · [C++ solution](../../solutions/atcoder/implementation/abc331_b_buy_one_carton_of_milk.cpp)

## Try first

Enumerate pack counts up to the number of that pack type alone needed to reach N.

## Reasoning

Enumerate pack counts up to the number of that pack type alone needed to reach N. Any larger count is unnecessary with positive prices. Among combinations meeting the egg target, minimize the total price.

## Cost

- Time: **O(N^3)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
