# Twins

[Original problem](https://codeforces.com/problemset/problem/160/A) · [C++ solution](../../solutions/codeforces/greedy/160A_twins.cpp)

## Try first

For any fixed count, the largest coins maximize the money taken.

## Reasoning

For any fixed count, the largest coins maximize the money taken. Add them in descending order until their sum strictly exceeds the remainder; no smaller count can succeed.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Equal sums do not satisfy the strictly larger requirement.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
