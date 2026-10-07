# Treasure Chest

[Original problem](https://atcoder.jp/contests/abc299/tasks/abc299_a) · [C++ solution](../../solutions/atcoder/implementation/abc299_a_treasure_chest.cpp)

## Try first

Find the first and last bar and the unique star.

## Reasoning

Find the first and last bar and the unique star. The star is inside exactly when its position lies strictly between the two bar positions.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
