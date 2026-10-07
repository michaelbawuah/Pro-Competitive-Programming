# Shampoo

[Original problem](https://atcoder.jp/contests/abc243/tasks/abc243_a) · [C++ solution](../../solutions/atcoder/implementation/abc243_a_shampoo.cpp)

## Try first

Remove as many complete daily consumption cycles as possible.

## Reasoning

Remove as many complete daily consumption cycles as possible. In the remaining partial day, compare the shampoo with the cumulative father and mother requirements.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
