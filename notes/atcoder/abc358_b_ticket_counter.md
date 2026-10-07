# Ticket Counter

[Original problem](https://atcoder.jp/contests/abc358/tasks/abc358_b) · [C++ solution](../../solutions/atcoder/implementation/abc358_b_ticket_counter.cpp)

## Try first

A customer starts when both the booth is free and they have arrived.

## Reasoning

A customer starts when both the booth is free and they have arrived. The maximum of the preceding completion time and arrival time gives that start; add the fixed service time.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
