# Qualification Contest

[Original problem](https://atcoder.jp/contests/abc288/tasks/abc288_b) · [C++ solution](../../solutions/atcoder/implementation/abc288_b_qualification_contest.cpp)

## Try first

Qualification is determined by the original first K positions.

## Reasoning

Qualification is determined by the original first K positions. Sort only that prefix lexicographically and print it, excluding all lower-ranked participants.

## Cost

- Time: **O(NL+K L log K)**.
- Extra space: **O(NL)**.

## C++ takeaway

Sorting changes element positions. Store an original index alongside each value when the answer refers to input positions, and make any tie-break explicit in the ordering.

## Watch for

Check repeated values and ties; a rank by occurrence differs from a rank by distinct value.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
