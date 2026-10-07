# Popular Vote

[Original problem](https://atcoder.jp/contests/abc161/tasks/abc161_b) · [C++ solution](../../solutions/atcoder/implementation/abc161_b_popular_vote.cpp)

## Try first

Clear the positive denominator from each threshold comparison.

## Reasoning

Clear the positive denominator from each threshold comparison. Selection succeeds exactly when at least M items meet that inclusive threshold.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
