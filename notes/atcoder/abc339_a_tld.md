# TLD

[Original problem](https://atcoder.jp/contests/abc339/tasks/abc339_a) · [C++ solution](../../solutions/atcoder/implementation/abc339_a_tld.cpp)

## Try first

The desired suffix starts immediately after the final period.

## Reasoning

The desired suffix starts immediately after the final period. The input guarantees that period exists and is not the last character.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

String rfind() locates the last matching occurrence. Its return type is unsigned, and string::npos represents failure rather than a valid position.

## Watch for

Keep the character after the delimiter when forming the suffix, and respect any nonempty-suffix guarantee.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
