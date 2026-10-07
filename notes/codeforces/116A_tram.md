# Tram

[Original problem](https://codeforces.com/problemset/problem/116/A) · [C++ solution](../../solutions/codeforces/implementation/116A_tram.cpp)

## Try first

Track the current occupancy and its maximum after each stop.

## Reasoning

The current passenger count starts at zero and changes by entering minus leaving at each stop. This invariant reconstructs the occupancy on every segment. Capacity must be at least their maximum, and that maximum is sufficient because no segment carries more passengers.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

A running aggregate avoids storing all input events when only their prefix state matters.

## Watch for

Passengers leave before new passengers enter. Record occupancy after both changes at a stop.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
