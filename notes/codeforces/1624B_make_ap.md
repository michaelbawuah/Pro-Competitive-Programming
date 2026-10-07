# Make AP

[Original problem](https://codeforces.com/problemset/problem/1624/B) · [C++ solution](../../solutions/codeforces/mathematics/1624B_make_ap.cpp)

## Try first

Choose which of the three terms to multiply.

## Reasoning

Choose which of the three terms to multiply. The arithmetic-progression equation uniquely determines its required new value; accept exactly when that positive value is an integer multiple of the original term.

## Cost

- Time: **O(1) per case**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Reject zero or negative target values; the multiplier must be a positive integer.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
