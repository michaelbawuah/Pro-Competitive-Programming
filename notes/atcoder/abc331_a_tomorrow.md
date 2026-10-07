# Tomorrow

[Original problem](https://atcoder.jp/contests/abc331/tasks/abc331_a) · [C++ solution](../../solutions/atcoder/implementation/abc331_a_tomorrow.cpp)

## Try first

Increment the day, carrying into the month when it exceeds the month length.

## Reasoning

Increment the day, carrying into the month when it exceeds the month length. Carry the month into the year only when it exceeds the yearly month count.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
