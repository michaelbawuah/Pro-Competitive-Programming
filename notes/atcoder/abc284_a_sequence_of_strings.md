# Sequence of Strings

[Original problem](https://atcoder.jp/contests/abc284/tasks/abc284_a) · [C++ solution](../../solutions/atcoder/implementation/abc284_a_sequence_of_strings.cpp)

## Try first

Store the input strings in order, then traverse their indices from the last to the first.

## Reasoning

Store the input strings in order, then traverse their indices from the last to the first. Each string itself remains unchanged.

## Cost

- Time: **O(total characters)**.
- Extra space: **O(total characters)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
