# 2UP3DOWN

[Original problem](https://atcoder.jp/contests/abc326/tasks/abc326_a) · [C++ solution](../../solutions/atcoder/implementation/abc326_a_2up3down.cpp)

## Try first

Use the signed floor difference: the stairs permit at most two floors upward or three downward.

## Reasoning

Use the signed floor difference: the stairs permit at most two floors upward or three downward. The valid difference interval is inclusive from minus three to two.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
