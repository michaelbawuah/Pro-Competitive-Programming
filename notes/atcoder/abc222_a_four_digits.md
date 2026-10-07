# Four Digits

[Original problem](https://atcoder.jp/contests/abc222/tasks/abc222_a) · [C++ solution](../../solutions/atcoder/implementation/abc222_a_four_digits.cpp)

## Try first

Set a field width of four and fill missing leading positions with zeros.

## Reasoning

Set a field width of four and fill missing leading positions with zeros. Existing four-digit values need no padding.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
