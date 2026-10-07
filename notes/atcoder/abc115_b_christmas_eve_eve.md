# Christmas Eve Eve

[Original problem](https://atcoder.jp/contests/abc115/tasks/abc115_b) · [C++ solution](../../solutions/atcoder/implementation/abc115_b_christmas_eve_eve.cpp)

## Try first

All regular prices contribute to the total, and discounting the largest item subtracts half that price.

## Reasoning

All regular prices contribute to the total, and discounting the largest item subtracts half that price. Even prices make the halving exact.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
