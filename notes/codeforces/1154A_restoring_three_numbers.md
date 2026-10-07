# Restoring Three Numbers

[Original problem](https://codeforces.com/problemset/problem/1154/A) · [C++ solution](../../solutions/codeforces/mathematics/1154A_restoring_three_numbers.cpp)

## Try first

Positive hidden numbers make their total the largest given sum.

## Reasoning

Positive hidden numbers make their total the largest given sum. Subtract each pairwise sum from that total to recover the omitted number, yielding all three numbers in some order.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
