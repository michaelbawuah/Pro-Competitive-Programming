# ICPC Balloons

[Original problem](https://codeforces.com/problemset/problem/1703/B) · [C++ solution](../../solutions/codeforces/counting/1703B_icpc_balloons.cpp)

## Try first

Every solve earns one balloon and the first solve of each distinct problem earns one extra.

## Reasoning

Every solve earns one balloon and the first solve of each distinct problem earns one extra. Track seen letters and add two for their first occurrence, one thereafter.

## Cost

- Time: **O(n) per case**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
