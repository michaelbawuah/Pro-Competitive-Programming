# Watermelon

[Original problem](https://codeforces.com/problemset/problem/4/A) · [C++ solution](../../solutions/codeforces/implementation/4A_watermelon.cpp)

## Try first

Both pieces must be positive and even.

## Reasoning

Two positive even numbers sum to an even number at least four. Conversely, any even weight at least four splits into 2 and weight - 2. These conditions are both necessary and sufficient.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Use && to combine required conditions.

## Watch for

Weight 2 is even but cannot be split as required.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
