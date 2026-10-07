# Elevator Rides

[Original problem](https://cses.fi/problemset/task/1653/) · [C++ solution](../../solutions/cses/bitmask_dp/1653_elevator_rides.cpp)

## Try first

For each subset keep the lexicographically smallest pair of ride count and last-ride load.

## Reasoning

For each subset keep the lexicographically smallest pair of ride count and last-ride load. Append each possible last person, opening a new ride only when needed. Among states with equal ride count, a smaller final load leaves at least as much room for every future extension.

## Cost

- Time: **O(n 2^n)**.
- Extra space: **O(2^n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
