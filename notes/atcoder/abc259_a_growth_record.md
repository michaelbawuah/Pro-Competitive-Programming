# Growth Record

[Original problem](https://atcoder.jp/contests/abc259/tasks/abc259_a) · [C++ solution](../../solutions/atcoder/implementation/abc259_a_growth_record.cpp)

## Try first

All growth has finished by age X.

## Reasoning

All growth has finished by age X. Rewind only the growth years between M and X when M is below X; ages at least X retain height T.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
