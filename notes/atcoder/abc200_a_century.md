# Century

[Original problem](https://atcoder.jp/contests/abc200/tasks/abc200_a) · [C++ solution](../../solutions/atcoder/implementation/abc200_a_century.cpp)

## Try first

Centuries are consecutive blocks of one hundred years starting at year one, so ceiling-divide the year by one hundred.

## Reasoning

Centuries are consecutive blocks of one hundred years starting at year one, so ceiling-divide the year by one hundred.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
