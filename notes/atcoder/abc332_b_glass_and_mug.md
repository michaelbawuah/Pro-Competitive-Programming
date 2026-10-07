# Glass and Mug

[Original problem](https://atcoder.jp/contests/abc332/tasks/abc332_b) · [C++ solution](../../solutions/atcoder/implementation/abc332_b_glass_and_mug.cpp)

## Try first

Apply exactly one branch per operation in the stated priority order.

## Reasoning

Apply exactly one branch per operation in the stated priority order. A transfer is limited by both the remaining glass capacity and the water available in the mug.

## Cost

- Time: **O(K)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
