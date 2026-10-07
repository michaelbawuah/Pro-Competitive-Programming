# Candies

[Original problem](https://codeforces.com/problemset/problem/1343/A) · [C++ solution](../../solutions/codeforces/mathematics/1343A_candies.cpp)

## Try first

The geometric total is x times (2^k-1), with k at least two.

## Reasoning

The geometric total is x times (2^k-1), with k at least two. Enumerate these denominators and choose one dividing n; the problem guarantees at least one answer.

## Cost

- Time: **O(log n) per case**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Different valid x values may exist; the checker must accept any valid geometric decomposition.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
