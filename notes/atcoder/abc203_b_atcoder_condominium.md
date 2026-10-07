# AtCoder Condominium

[Original problem](https://atcoder.jp/contests/abc203/tasks/abc203_b) · [C++ solution](../../solutions/atcoder/implementation/abc203_b_atcoder_condominium.cpp)

## Try first

Room number is 100 times its floor plus its room index.

## Reasoning

Room number is 100 times its floor plus its room index. Sum both independent contributions using arithmetic series.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
