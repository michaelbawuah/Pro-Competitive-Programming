# Division?

[Original problem](https://codeforces.com/problemset/problem/1669/A) · [C++ solution](../../solutions/codeforces/implementation/1669A_division.cpp)

## Try first

Test rating thresholds from highest to lowest.

## Reasoning

Test rating thresholds from highest to lowest. The first satisfied lower bound identifies the unique division, including exact boundary values.

## Cost

- Time: **O(1) per case**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
