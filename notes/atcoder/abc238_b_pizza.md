# Pizza

[Original problem](https://atcoder.jp/contests/abc238/tasks/abc238_b) · [C++ solution](../../solutions/atcoder/implementation/abc238_b_pizza.cpp)

## Try first

Cumulative rotation modulo 360 gives cut positions up to a reflection, which preserves sector sizes.

## Reasoning

Cumulative rotation modulo 360 gives cut positions up to a reflection, which preserves sector sizes. Sort the cuts together with 0 and 360; the largest consecutive gap is the largest sector.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
