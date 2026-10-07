# Hit the Lottery

[Original problem](https://codeforces.com/problemset/problem/996/A) · [C++ solution](../../solutions/codeforces/greedy/996A_hit_the_lottery.cpp)

## Try first

Take denominations from largest to smallest.

## Reasoning

Take denominations from largest to smallest. Each denomination is a multiple of the next smaller one, so replacing a full group of smaller bills with a larger bill never increases the count and proves the greedy choice.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

The proof uses these denominations; arbitrary coin systems need not support greedy change.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
