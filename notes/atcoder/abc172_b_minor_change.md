# Minor Change

[Original problem](https://atcoder.jp/contests/abc172/tasks/abc172_b) · [C++ solution](../../solutions/atcoder/implementation/abc172_b_minor_change.cpp)

## Try first

Every mismatching position needs one replacement, and replacing it once is sufficient.

## Reasoning

Every mismatching position needs one replacement, and replacing it once is sufficient. Matching positions need no action.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep input text as std::string when leading zeros or decimal digits matter. Convert one-based positions to zero-based indices before accessing characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
