# First ABC 2

[Original problem](https://atcoder.jp/contests/abc322/tasks/abc322_a) · [C++ solution](../../solutions/atcoder/implementation/abc322_a_first_abc_2.cpp)

## Try first

Find locates the first contiguous occurrence of ABC.

## Reasoning

Find locates the first contiguous occurrence of ABC. Convert its zero-based position to one-based, and test the not-found sentinel before conversion.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

String find() returns a zero-based position or string::npos. Test the sentinel before adding one or converting the position to a signed output type.

## Watch for

Check the not-found case and whether the requested occurrence is the first or the last.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
