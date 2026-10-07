# Low Elements

[Original problem](https://atcoder.jp/contests/abc152/tasks/abc152_c) · [C++ solution](../../solutions/atcoder/implementation/abc152_c_low_elements.cpp)

## Try first

The condition says the current element is a prefix minimum.

## Reasoning

The condition says the current element is a prefix minimum. Maintain that minimum while scanning and count precisely positions equal to it.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Initialize counters and container entries before scanning. A range-based loop with int& can read directly into a vector; a loop by value only copies each entry.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
