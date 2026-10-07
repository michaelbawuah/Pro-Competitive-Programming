# Shiritori

[Original problem](https://atcoder.jp/contests/abc109/tasks/abc109_b) · [C++ solution](../../solutions/atcoder/implementation/abc109_b_shiritori.cpp)

## Try first

A valid turn must link to the previous final character and introduce a new word.

## Reasoning

A valid turn must link to the previous final character and introduce a new word. Check the link directly and use a set to detect any repeated word.

## Cost

- Time: **O(n L log n)**.
- Extra space: **O(n L)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
