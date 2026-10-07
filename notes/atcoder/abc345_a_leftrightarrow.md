# Leftrightarrow

[Original problem](https://atcoder.jp/contests/abc345/tasks/abc345_a) · [C++ solution](../../solutions/atcoder/implementation/abc345_a_leftrightarrow.cpp)

## Try first

Check the opening and closing arrowheads and require every interior character to be equals.

## Reasoning

Check the opening and closing arrowheads and require every interior character to be equals. The minimum input length ensures at least one interior character.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
