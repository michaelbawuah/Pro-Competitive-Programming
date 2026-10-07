# Still TBD

[Original problem](https://atcoder.jp/contests/abc119/tasks/abc119_a) · [C++ solution](../../solutions/atcoder/implementation/abc119_a_still_tbd.cpp)

## Try first

Zero-padded year/month/day strings sort in chronological order.

## Reasoning

Zero-padded year/month/day strings sort in chronological order. Compare directly with the inclusive last Heisei date specified by the problem.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep input text as std::string when leading zeros or decimal digits matter. Convert one-based positions to zero-based indices before accessing characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
