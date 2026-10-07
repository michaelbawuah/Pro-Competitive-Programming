# Ringo's Favorite Numbers

[Original problem](https://atcoder.jp/contests/abc100/tasks/abc100_b) · [C++ solution](../../solutions/atcoder/implementation/abc100_b_ringo_s_favorite_numbers.cpp)

## Try first

After removing exactly D factors of 100, the remaining factor must not be divisible by 100.

## Reasoning

After removing exactly D factors of 100, the remaining factor must not be divisible by 100. The first skipped factor is 100, so the hundredth valid factor is 101.

## Cost

- Time: **O(D)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
