# Battle

[Original problem](https://atcoder.jp/contests/abc164/tasks/abc164_b) · [C++ solution](../../solutions/atcoder/implementation/abc164_b_battle.cpp)

## Try first

Compare the number of hits each monster needs.

## Reasoning

Compare the number of hits each monster needs. Equal hit counts favor Takahashi because he attacks first.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
