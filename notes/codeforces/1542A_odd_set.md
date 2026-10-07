# Odd Set

[Original problem](https://codeforces.com/problemset/problem/1542/A) · [C++ solution](../../solutions/codeforces/counting/1542A_odd_set.cpp)

## Try first

A pair has odd sum exactly when one member is odd and the other even.

## Reasoning

A pair has odd sum exactly when one member is odd and the other even. Thus all elements can be paired as required exactly when the two parity counts are equal.

## Cost

- Time: **O(n) per case**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
