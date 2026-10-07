# Gentle Pairs

[Original problem](https://atcoder.jp/contests/abc187/tasks/abc187_b) · [C++ solution](../../solutions/atcoder/implementation/abc187_b_gentle_pairs.cpp)

## Try first

Because horizontal coordinates differ, a slope between minus one and one is equivalent to absolute vertical change at most absolute horizontal change.

## Reasoning

Because horizontal coordinates differ, a slope between minus one and one is equivalent to absolute vertical change at most absolute horizontal change. This avoids division and sign cases.

## Cost

- Time: **O(n^2)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
