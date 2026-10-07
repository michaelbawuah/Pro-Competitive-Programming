# Election 2

[Original problem](https://atcoder.jp/contests/abc366/tasks/abc366_a) · [C++ solution](../../solutions/atcoder/implementation/abc366_a_election_2.cpp)

## Try first

The result is fixed exactly when one candidate already has a strict majority of all N votes.

## Reasoning

The result is fixed exactly when one candidate already has a strict majority of all N votes. Otherwise assigning all uncounted votes to either candidate can still affect the winner.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
