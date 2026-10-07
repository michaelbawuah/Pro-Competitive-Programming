# Yet Another Two Integers Problem

[Original problem](https://codeforces.com/problemset/problem/1409/A) · [C++ solution](../../solutions/codeforces/mathematics/1409A_yet_another_two_integers_problem.cpp)

## Try first

Each move closes the distance by at most ten, giving a ceiling-division lower bound.

## Reasoning

Each move closes the distance by at most ten, giving a ceiling-division lower bound. Use ten-unit moves followed by one smaller move when needed to attain it.

## Cost

- Time: **O(1) per case**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
