# typo

[Original problem](https://atcoder.jp/contests/abc221/tasks/abc221_b) · [C++ solution](../../solutions/atcoder/implementation/abc221_b_typo.cpp)

## Try first

Try no swap and every allowed adjacent swap.

## Reasoning

Try no swap and every allowed adjacent swap. Restore the original after each trial so all trials use exactly one operation.

## Cost

- Time: **O(n^2)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
