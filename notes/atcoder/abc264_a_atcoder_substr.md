# "atcoder".substr()

[Original problem](https://atcoder.jp/contests/abc264/tasks/abc264_a) · [C++ solution](../../solutions/atcoder/implementation/abc264_a_atcoder_substr.cpp)

## Try first

The first requested character has zero-based index L-1, and the inclusive interval contains R-L+1 characters.

## Reasoning

The first requested character has zero-based index L-1, and the inclusive interval contains R-L+1 characters. Pass that start and length to substr.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
