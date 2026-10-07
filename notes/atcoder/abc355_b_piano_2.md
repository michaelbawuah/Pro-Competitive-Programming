# Piano 2

[Original problem](https://atcoder.jp/contests/abc355/tasks/abc355_b) · [C++ solution](../../solutions/atcoder/implementation/abc355_b_piano_2.cpp)

## Try first

Attach an origin flag to each value before sorting the combined sequence.

## Reasoning

Attach an origin flag to each value before sorting the combined sequence. A neighboring pair qualifies exactly when both origin flags indicate A.

## Cost

- Time: **O((N+M) log(N+M))**.
- Extra space: **O(N+M)**.

## C++ takeaway

Sorting changes element positions. Store an original index alongside each value when the answer refers to input positions, and make any tie-break explicit in the ordering.

## Watch for

Check repeated values and ties; a rank by occurrence differs from a rank by distinct value.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
