# Prefix?

[Original problem](https://atcoder.jp/contests/abc268/tasks/abc268_b) · [C++ solution](../../solutions/atcoder/implementation/abc268_b_prefix.cpp)

## Try first

A prefix must fit within the target length and equal its initial segment.

## Reasoning

A prefix must fit within the target length and equal its initial segment. Compare exactly the source-length initial segment.

## Cost

- Time: **O(|S|+|T|)**.
- Extra space: **O(|S|+|T|)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
