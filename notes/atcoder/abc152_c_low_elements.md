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

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
