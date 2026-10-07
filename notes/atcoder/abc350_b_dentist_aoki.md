# Dentist Aoki

[Original problem](https://atcoder.jp/contests/abc350/tasks/abc350_b) · [C++ solution](../../solutions/atcoder/implementation/abc350_b_dentist_aoki.cpp)

## Try first

Every treatment toggles the occupancy of one hole.

## Reasoning

Every treatment toggles the occupancy of one hole. Start all holes occupied, apply the toggles, and count the remaining occupied holes.

## Cost

- Time: **O(N+Q)**.
- Extra space: **O(N)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
