# Luntik and Concerts

[Original problem](https://codeforces.com/problemset/problem/1582/A) · [C++ solution](../../solutions/codeforces/mathematics/1582A_luntik_and_concerts.cpp)

## Try first

The answer cannot be smaller than the parity of total weight.

## Reasoning

The answer cannot be smaller than the parity of total weight. With at least one item of each permitted weight, items of weights one and two balance the remaining threes, attaining difference zero or one according to that parity.

## Cost

- Time: **O(1) per case**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

This parity conclusion relies on the stated positive counts of all three item types.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
