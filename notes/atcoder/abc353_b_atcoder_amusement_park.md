# AtCoder Amusement Park

[Original problem](https://atcoder.jp/contests/abc353/tasks/abc353_b) · [C++ solution](../../solutions/atcoder/implementation/abc353_b_atcoder_amusement_park.cpp)

## Try first

Fill the current ride with whole groups in queue order.

## Reasoning

Fill the current ride with whole groups in queue order. Start a new ride whenever the next group would exceed capacity; the final nonempty ride also runs once.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
