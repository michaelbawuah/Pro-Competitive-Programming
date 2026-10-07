# I miss you...

[Original problem](https://atcoder.jp/contests/abc154/tasks/abc154_b) · [C++ solution](../../solutions/atcoder/implementation/abc154_b_i_miss_you.cpp)

## Try first

Only the input length matters; construct that many copies of x..

## Reasoning

Only the input length matters; construct that many copies of x.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep input text as std::string when leading zeros or decimal digits matter. Convert one-based positions to zero-based indices before accessing characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
