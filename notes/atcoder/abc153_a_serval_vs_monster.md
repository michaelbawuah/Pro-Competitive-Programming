# Serval vs Monster

[Original problem](https://atcoder.jp/contests/abc153/tasks/abc153_a) · [C++ solution](../../solutions/atcoder/implementation/abc153_a_serval_vs_monster.cpp)

## Try first

Each attack removes A health, so ceiling division counts the attacks needed to remove at least H.

## Reasoning

Each attack removes A health, so ceiling division counts the attacks needed to remove at least H.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
