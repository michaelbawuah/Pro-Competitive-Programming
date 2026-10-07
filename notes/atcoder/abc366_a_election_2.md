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

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
