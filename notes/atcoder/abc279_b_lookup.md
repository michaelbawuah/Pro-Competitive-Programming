# LOOKUP

[Original problem](https://atcoder.jp/contests/abc279/tasks/abc279_b) · [C++ solution](../../solutions/atcoder/implementation/abc279_b_lookup.cpp)

## Try first

A contiguous substring occurs at some starting position without skipping characters.

## Reasoning

A contiguous substring occurs at some starting position without skipping characters. The string find operation tests exactly this condition.

## Cost

- Time: **O(|S||T|)**.
- Extra space: **O(|S|+|T|)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
