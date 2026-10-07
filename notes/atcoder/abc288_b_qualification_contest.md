# Qualification Contest

[Original problem](https://atcoder.jp/contests/abc288/tasks/abc288_b) · [C++ solution](../../solutions/atcoder/implementation/abc288_b_qualification_contest.cpp)

## Try first

Qualification is determined by the original first K positions.

## Reasoning

Qualification is determined by the original first K positions. Sort only that prefix lexicographically and print it, excluding all lower-ranked participants.

## Cost

- Time: **O(NL+K L log K)**.
- Extra space: **O(NL)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
