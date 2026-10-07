# World Meeting

[Original problem](https://atcoder.jp/contests/abc325/tasks/abc325_b) · [C++ solution](../../solutions/atcoder/implementation/abc325_b_world_meeting.cpp)

## Try first

An optimal one-hour meeting can start at an integer hour because all availability boundaries are integer hours.

## Reasoning

An optimal one-hour meeting can start at an integer hour because all availability boundaries are integer hours. Try all twenty-four UTC starts and sum offices whose local start is from nine through seventeen inclusive.

## Cost

- Time: **O(24N)**.
- Extra space: **O(N)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
