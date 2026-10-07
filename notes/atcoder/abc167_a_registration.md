# Registration

[Original problem](https://atcoder.jp/contests/abc167/tasks/abc167_a) · [C++ solution](../../solutions/atcoder/implementation/abc167_a_registration.cpp)

## Try first

The length difference is guaranteed to be one.

## Reasoning

The length difference is guaranteed to be one. Therefore T was formed by appending exactly one character precisely when its prefix equals S.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep input text as std::string when leading zeros or decimal digits matter. Convert one-based positions to zero-based indices before accessing characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
