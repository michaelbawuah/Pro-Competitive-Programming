# The Number of Even Pairs

[Original problem](https://atcoder.jp/contests/abc159/tasks/abc159_a) · [C++ solution](../../solutions/atcoder/implementation/abc159_a_the_number_of_even_pairs.cpp)

## Try first

An even sum requires equal parities.

## Reasoning

An even sum requires equal parities. Add the number of unordered pairs within each parity class.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
