# Boats Competition

[Original problem](https://codeforces.com/problemset/problem/1399/C) · [C++ solution](../../solutions/codeforces/two_pointers/1399C_boats_competition.cpp)

## Try first

Enumerate the common pair sum.

## Reasoning

Enumerate the common pair sum. For a fixed sum, sorted two pointers safely discard an endpoint that cannot pair with any remaining value; matching endpoints produces a maximum disjoint pairing.

## Cost

- Time: **O(n^2) per case**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

The bound of 2n uses the statement guarantee that every weight is at most n.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
