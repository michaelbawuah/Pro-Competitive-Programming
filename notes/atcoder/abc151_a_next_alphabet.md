# Next Alphabet

[Original problem](https://atcoder.jp/contests/abc151/tasks/abc151_a) · [C++ solution](../../solutions/atcoder/implementation/abc151_a_next_alphabet.cpp)

## Try first

The input excludes z, so incrementing its lowercase letter code gives the next letter without wrapping..

## Reasoning

The input excludes z, so incrementing its lowercase letter code gives the next letter without wrapping.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
