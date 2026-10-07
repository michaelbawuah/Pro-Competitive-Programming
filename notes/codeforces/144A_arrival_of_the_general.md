# Arrival of the General

[Original problem](https://codeforces.com/problemset/problem/144/A) · [C++ solution](../../solutions/codeforces/greedy/144A_arrival_of_the_general.cpp)

## Try first

Use the leftmost maximum and rightmost minimum to minimize their travel.

## Reasoning

Use the leftmost maximum and rightmost minimum to minimize their travel. Their distances to the two ends add, except that crossing their relative order shares one swap and subtracts one.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Tie-breaking differs: first maximum, last minimum.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
