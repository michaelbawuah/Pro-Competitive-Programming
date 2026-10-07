# uNrEaDaBlE sTrInG

[Original problem](https://atcoder.jp/contests/abc192/tasks/abc192_b) · [C++ solution](../../solutions/atcoder/implementation/abc192_b_unreadable_string.cpp)

## Try first

Convert odd one-based positions to even zero-based indices.

## Reasoning

Convert odd one-based positions to even zero-based indices. Test the required lowercase or uppercase range at each index.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep input text as std::string when leading zeros or decimal digits matter. Convert one-based positions to zero-based indices before accessing characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
