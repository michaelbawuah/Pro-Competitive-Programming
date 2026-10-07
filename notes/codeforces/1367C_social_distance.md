# Social Distance

[Original problem](https://codeforces.com/problemset/problem/1367/C) · [C++ solution](../../solutions/codeforces/greedy/1367C_social_distance.cpp)

## Try first

Place a new person at the earliest seat sufficiently far from the previous person and the next original person.

## Reasoning

Place a new person at the earliest seat sufficiently far from the previous person and the next original person. Moving a feasible choice earlier cannot reduce room to its right, giving an exchange argument for greedy optimality.

## Cost

- Time: **O(n) per case**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Respect original occupied seats to the right, not just people already processed.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
