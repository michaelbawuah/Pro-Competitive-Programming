# Misjudge the Time

[Original problem](https://atcoder.jp/contests/abc278/tasks/abc278_b) · [C++ solution](../../solutions/atcoder/implementation/abc278_b_misjudge_the_time.cpp)

## Try first

Test the current time by exchanging the hour ones and minute tens digits.

## Reasoning

Test the current time by exchanging the hour ones and minute tens digits. Advance one minute with day wraparound until the first valid swapped time; midnight guarantees termination within one day.

## Cost

- Time: **O(24*60)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
