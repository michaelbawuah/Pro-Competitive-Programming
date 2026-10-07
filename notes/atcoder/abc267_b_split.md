# Split?

[Original problem](https://atcoder.jp/contests/abc267/tasks/abc267_b) · [C++ solution](../../solutions/atcoder/implementation/abc267_b_split.cpp)

## Try first

Map each pin to one of seven columns and mark columns with a standing pin.

## Reasoning

Map each pin to one of seven columns and mark columns with a standing pin. A split needs the head pin down and an empty column strictly between two occupied columns.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
