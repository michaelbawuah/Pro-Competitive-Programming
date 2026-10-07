# Slimes

[Original problem](https://atcoder.jp/contests/abc143/tasks/abc143_c) · [C++ solution](../../solutions/atcoder/implementation/abc143_c_slimes.cpp)

## Try first

Each maximal run of one color fuses into one slime.

## Reasoning

Each maximal run of one color fuses into one slime. Different neighboring runs cannot fuse, so count the first run and every color transition.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string indexing is zero-based. Use a size-compatible loop bound and ensure a complete substring fits before reading adjacent characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
