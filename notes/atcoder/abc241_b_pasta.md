# Pasta

[Original problem](https://atcoder.jp/contests/abc241/tasks/abc241_b) · [C++ solution](../../solutions/atcoder/implementation/abc241_b_pasta.cpp)

## Try first

Count available noodles by length and consume one matching noodle for each requested meal.

## Reasoning

Count available noodles by length and consume one matching noodle for each requested meal. Any negative remaining count proves a shortage.

## Cost

- Time: **O((N+M) log N)**.
- Extra space: **O(N)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
