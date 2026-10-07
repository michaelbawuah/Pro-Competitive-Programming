# LOOKUP

[Original problem](https://atcoder.jp/contests/abc279/tasks/abc279_b) · [C++ solution](../../solutions/atcoder/implementation/abc279_b_lookup.cpp)

## Try first

A contiguous substring occurs at some starting position without skipping characters.

## Reasoning

A contiguous substring occurs at some starting position without skipping characters. The string find operation tests exactly this condition.

## Cost

- Time: **O(|S||T|)**.
- Extra space: **O(|S|+|T|)**.

## C++ takeaway

String find() returns a zero-based position or string::npos. Test the sentinel before adding one or converting the position to a signed output type.

## Watch for

Check the not-found case and whether the requested occurrence is the first or the last.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
