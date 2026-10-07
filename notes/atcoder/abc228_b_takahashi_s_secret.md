# Takahashi's Secret

[Original problem](https://atcoder.jp/contests/abc228/tasks/abc228_b) · [C++ solution](../../solutions/atcoder/implementation/abc228_b_takahashi_s_secret.cpp)

## Try first

Follow the single outgoing edge from each informed person.

## Reasoning

Follow the single outgoing edge from each informed person. On the first repeated person, future traversal repeats the same cycle and cannot reach anyone new.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

vector<bool> stores packed flags and returns a proxy on indexed access. Assign flags through indexing instead of trying to bind a bool& to an element.

## Watch for

Initialize every flag and preserve the distinction between a zero-based position and a one-based label.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
