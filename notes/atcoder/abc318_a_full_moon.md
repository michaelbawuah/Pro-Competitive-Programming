# Full Moon

[Original problem](https://atcoder.jp/contests/abc318/tasks/abc318_a) · [C++ solution](../../solutions/atcoder/implementation/abc318_a_full_moon.cpp)

## Try first

If the first full moon is after N, none occurs in range.

## Reasoning

If the first full moon is after N, none occurs in range. Otherwise count that first event plus the complete P-day intervals that still fit before N.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
