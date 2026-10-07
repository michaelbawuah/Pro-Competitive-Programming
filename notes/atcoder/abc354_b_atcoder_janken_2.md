# AtCoder Janken 2

[Original problem](https://atcoder.jp/contests/abc354/tasks/abc354_b) · [C++ solution](../../solutions/atcoder/implementation/abc354_b_atcoder_janken_2.cpp)

## Try first

Sum ratings independently of ordering, then sort usernames lexicographically.

## Reasoning

Sum ratings independently of ordering, then sort usernames lexicographically. The remainder of the total modulo N is already the required zero-based winning index.

## Cost

- Time: **O(n L log n)**.
- Extra space: **O(nL)**.

## C++ takeaway

Sorting changes element positions. Store an original index alongside each value when the answer refers to input positions, and make any tie-break explicit in the ordering.

## Watch for

Check repeated values and ties; a rank by occurrence differs from a rank by distinct value.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
