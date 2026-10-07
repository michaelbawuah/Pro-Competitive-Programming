# Choosing Teams

[Original problem](https://codeforces.com/problemset/problem/432/A) · [C++ solution](../../solutions/codeforces/counting/432A_choosing_teams.cpp)

## Try first

A student can participate in the planned contests exactly when their previous count plus k is at most five.

## Reasoning

A student can participate in the planned contests exactly when their previous count plus k is at most five. Any three eligible students form a team, so divide the eligible count by three.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
