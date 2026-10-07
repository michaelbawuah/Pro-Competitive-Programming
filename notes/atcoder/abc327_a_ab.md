# ab

[Original problem](https://atcoder.jp/contests/abc327/tasks/abc327_a) · [C++ solution](../../solutions/atcoder/implementation/abc327_a_ab.cpp)

## Try first

Adjacent a and b can appear in exactly two orders, ab and ba.

## Reasoning

Adjacent a and b can appear in exactly two orders, ab and ba. Test for either contiguous two-character substring.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

String find() returns a zero-based position or string::npos. Test the sentinel before adding one or converting the position to a signed output type.

## Watch for

Check the not-found case and whether the requested occurrence is the first or the last.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
