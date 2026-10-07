# Balanced Array

[Original problem](https://codeforces.com/problemset/problem/1343/B) · [C++ solution](../../solutions/codeforces/constructive/1343B_balanced_array.cpp)

## Try first

The odd half must contain an even number of elements to have an even sum, requiring n divisible by four.

## Reasoning

The odd half must contain an even number of elements to have an even sum, requiring n divisible by four. Use consecutive positive evens, then small consecutive odds and one final odd chosen to balance the sums.

## Cost

- Time: **O(n) per case**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
