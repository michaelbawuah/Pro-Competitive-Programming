# Water Station

[Original problem](https://atcoder.jp/contests/abc305/tasks/abc305_a) · [C++ solution](../../solutions/atcoder/implementation/abc305_a_water_station.cpp)

## Try first

For integer positions, remainders zero through two round down to a multiple of five, and remainders three or four round up.

## Reasoning

For integer positions, remainders zero through two round down to a multiple of five, and remainders three or four round up. Adding two before division implements those cases.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
