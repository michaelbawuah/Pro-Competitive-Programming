# Rainy Season

[Original problem](https://atcoder.jp/contests/abc175/tasks/abc175_a) · [C++ solution](../../solutions/atcoder/implementation/abc175_a_rainy_season.cpp)

## Try first

Keep the current rainy-day streak and reset it on sunshine.

## Reasoning

Keep the current rainy-day streak and reset it on sunshine. The maximum streak is the answer.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep input text as std::string when leading zeros or decimal digits matter. Convert one-based positions to zero-based indices before accessing characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
