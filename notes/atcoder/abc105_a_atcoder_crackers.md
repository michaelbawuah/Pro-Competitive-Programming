# AtCoder Crackers

[Original problem](https://atcoder.jp/contests/abc105/tasks/abc105_a) · [C++ solution](../../solutions/atcoder/implementation/abc105_a_atcoder_crackers.cpp)

## Try first

An even distribution uses floor(N/K) or ceil(N/K) crackers per person.

## Reasoning

An even distribution uses floor(N/K) or ceil(N/K) crackers per person. Their difference is zero exactly when division is exact.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
