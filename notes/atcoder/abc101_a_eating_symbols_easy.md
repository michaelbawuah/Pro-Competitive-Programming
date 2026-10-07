# Eating Symbols Easy

[Original problem](https://atcoder.jp/contests/abc101/tasks/abc101_a) · [C++ solution](../../solutions/atcoder/implementation/abc101_a_eating_symbols_easy.cpp)

## Try first

Each symbol contributes independently: add one for plus and subtract one for minus.

## Reasoning

Each symbol contributes independently: add one for plus and subtract one for minus.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep input text as std::string when leading zeros or decimal digits matter. Convert one-based positions to zero-based indices before accessing characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
