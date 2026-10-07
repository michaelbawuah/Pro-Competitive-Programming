# Hulk

[Original problem](https://codeforces.com/problemset/problem/705/A) · [C++ solution](../../solutions/codeforces/strings/705A_hulk.cpp)

## Try first

Alternate the two clauses by index parity.

## Reasoning

Alternate the two clauses by index parity. Insert that only between clauses, then append the final it once, giving exactly the required sentence structure.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
