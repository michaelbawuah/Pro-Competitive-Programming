# Gifts Fixing

[Original problem](https://codeforces.com/problemset/problem/1399/B) · [C++ solution](../../solutions/codeforces/greedy/1399B_gifts_fixing.cpp)

## Try first

The largest attainable common amounts are the separate minima because operations only remove items.

## Reasoning

The largest attainable common amounts are the separate minima because operations only remove items. For each gift, simultaneous removals handle both deficits together, followed by the remaining single deficit, costing their maximum.

## Cost

- Time: **O(n) per case**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Sum the per-gift maxima, not the maximum of two global deficit sums.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
