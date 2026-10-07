# Many Oranges

[Original problem](https://atcoder.jp/contests/abc195/tasks/abc195_b) · [C++ solution](../../solutions/atcoder/implementation/abc195_b_many_oranges.cpp)

## Try first

For k oranges, the total can be any real weight between kA and kB.

## Reasoning

For k oranges, the total can be any real weight between kA and kB. Thus valid integer k range from ceil(W/B) to floor(W/A), after converting kilograms to grams.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Use long long for products and accumulated totals, and check limits before a multiplication that could overflow.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
