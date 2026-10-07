# Fair Division

[Original problem](https://codeforces.com/problemset/problem/1472/B) · [C++ solution](../../solutions/codeforces/mathematics/1472B_fair_division.cpp)

## Try first

An odd number of unit candies makes the total odd and impossible.

## Reasoning

An odd number of unit candies makes the total odd and impossible. With an even positive number of unit candies, they can balance either parity of two-unit candy count; with none, the two-unit candies must split evenly.

## Cost

- Time: **O(n) per case**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
