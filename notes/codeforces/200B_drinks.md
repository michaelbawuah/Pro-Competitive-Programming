# Drinks

[Original problem](https://codeforces.com/problemset/problem/200/B) · [C++ solution](../../solutions/codeforces/mathematics/200B_drinks.cpp)

## Try first

Equal drink volumes make the final percentage the arithmetic mean.

## Reasoning

Equal drink volumes make the final percentage the arithmetic mean. Sum all percentages and divide by the number of drinks using floating point.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Integer division would discard the fractional percentage.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
