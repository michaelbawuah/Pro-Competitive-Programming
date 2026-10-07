# Saturday

[Original problem](https://atcoder.jp/contests/abc267/tasks/abc267_a) · [C++ solution](../../solutions/atcoder/implementation/abc267_a_saturday.cpp)

## Try first

Map the weekday to its position in the Monday-through-Friday list.

## Reasoning

Map the weekday to its position in the Monday-through-Friday list. Saturday is five days after Monday, so subtract that zero-based position from five.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
