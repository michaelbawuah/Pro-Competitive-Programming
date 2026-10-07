# Even Odds

[Original problem](https://codeforces.com/problemset/problem/318/A) · [C++ solution](../../solutions/codeforces/mathematics/318A_even_odds.cpp)

## Try first

There are ceil(n/2) odd numbers before the even block.

## Reasoning

There are ceil(n/2) odd numbers before the even block. Locate k in the appropriate block and use its one-based arithmetic-progression position to compute the value directly.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Use 64-bit integers because n and k can reach 10^12.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
