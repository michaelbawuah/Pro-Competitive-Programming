# Required Remainder

[Original problem](https://codeforces.com/problemset/problem/1374/A) · [C++ solution](../../solutions/codeforces/mathematics/1374A_required_remainder.cpp)

## Try first

All valid values have the form y plus a nonnegative multiple of x.

## Reasoning

All valid values have the form y plus a nonnegative multiple of x. Remove the remainder of n-y modulo x from n to obtain the largest member of that progression not exceeding n.

## Cost

- Time: **O(1) per case**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
