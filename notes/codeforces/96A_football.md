# Football

[Original problem](https://codeforces.com/problemset/problem/96/A) · [C++ solution](../../solutions/codeforces/strings/96A_football.cpp)

## Try first

Track the length of the equal-character run ending at the current position.

## Reasoning

Track the length of the equal-character run ending at the current position. Reset to one when the team changes; the maximum of these lengths detects every dangerous run.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
