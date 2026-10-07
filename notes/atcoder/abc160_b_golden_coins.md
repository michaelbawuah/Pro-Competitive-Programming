# Golden Coins

[Original problem](https://atcoder.jp/contests/abc160/tasks/abc160_b) · [C++ solution](../../solutions/atcoder/implementation/abc160_b_golden_coins.cpp)

## Try first

A 500-yen coin yields more happiness per yen than 5-yen coins.

## Reasoning

A 500-yen coin yields more happiness per yen than 5-yen coins. Maximize those coins first, then use complete fives from the remainder.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
