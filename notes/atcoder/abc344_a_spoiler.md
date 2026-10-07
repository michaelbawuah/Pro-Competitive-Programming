# Spoiler

[Original problem](https://atcoder.jp/contests/abc344/tasks/abc344_a) · [C++ solution](../../solutions/atcoder/implementation/abc344_a_spoiler.cpp)

## Try first

Keep the prefix before the first bar and the suffix after the second bar.

## Reasoning

Keep the prefix before the first bar and the suffix after the second bar. Concatenating those pieces removes both bars and everything between them.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

String find() returns a zero-based position or string::npos. Test the sentinel before adding one or converting the position to a signed output type.

## Watch for

Check the not-found case and whether the requested occurrence is the first or the last.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
