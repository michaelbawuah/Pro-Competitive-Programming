# Who Ate the Cake?

[Original problem](https://atcoder.jp/contests/abc355/tasks/abc355_a) · [C++ solution](../../solutions/atcoder/implementation/abc355_a_who_ate_the_cake.cpp)

## Try first

Different exclusions leave the third person, whose number is six minus the two excluded numbers.

## Reasoning

Different exclusions leave the third person, whose number is six minus the two excluded numbers. Identical exclusions leave two suspects and cannot identify a unique culprit.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
