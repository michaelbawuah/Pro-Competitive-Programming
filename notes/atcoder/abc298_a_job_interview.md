# Job Interview

[Original problem](https://atcoder.jp/contests/abc298/tasks/abc298_a) · [C++ solution](../../solutions/atcoder/implementation/abc298_a_job_interview.cpp)

## Try first

Passing requires at least one good mark and no poor marks.

## Reasoning

Passing requires at least one good mark and no poor marks. Test these two presence conditions independently and combine them with logical AND.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

String find() returns a zero-based position or string::npos. Test the sentinel before adding one or converting the position to a signed output type.

## Watch for

Check the not-found case and whether the requested occurrence is the first or the last.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
