# Lucky 7

[Original problem](https://atcoder.jp/contests/abc162/tasks/abc162_a) · [C++ solution](../../solutions/atcoder/implementation/abc162_a_lucky_7.cpp)

## Try first

Search the decimal representation for a seven; any matching position suffices..

## Reasoning

Search the decimal representation for a seven; any matching position suffices.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep input text as std::string when leading zeros or decimal digits matter. Convert one-based positions to zero-based indices before accessing characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
