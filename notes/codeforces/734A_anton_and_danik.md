# Anton and Danik

[Original problem](https://codeforces.com/problemset/problem/734/A) · [C++ solution](../../solutions/codeforces/counting/734A_anton_and_danik.cpp)

## Try first

Count Anton wins and compare with the remaining games, which Danik won.

## Reasoning

Count Anton wins and compare with the remaining games, which Danik won. Comparing twice Anton count with n handles both strict majorities and the tie without floating point.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
