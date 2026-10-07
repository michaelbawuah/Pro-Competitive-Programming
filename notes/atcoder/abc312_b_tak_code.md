# TaK Code

[Original problem](https://atcoder.jp/contests/abc312/tasks/abc312_b) · [C++ solution](../../solutions/atcoder/implementation/abc312_b_tak_code.cpp)

## Try first

For every nine-by-nine window, check the top-left three-by-three black block and its one-cell white border.

## Reasoning

For every nine-by-nine window, check the top-left three-by-three black block and its one-cell white border. Mirror these checks into the bottom-right corner; the other cells are unrestricted. Scan starts in lexicographic order.

## Cost

- Time: **O(NM)**.
- Extra space: **O(NM)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
