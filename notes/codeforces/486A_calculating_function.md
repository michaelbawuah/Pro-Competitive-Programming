# Calculating Function

[Original problem](https://codeforces.com/problemset/problem/486/A) · [C++ solution](../../solutions/codeforces/mathematics/486A_calculating_function.cpp)

## Try first

Pair consecutive terms as -1+2, -3+4, and so on.

## Reasoning

Pair consecutive terms as -1+2, -3+4, and so on. Each complete pair contributes one; an odd final negative term gives the separate odd formula.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
