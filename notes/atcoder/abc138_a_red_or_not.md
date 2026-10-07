# Red or Not

[Original problem](https://atcoder.jp/contests/abc138/tasks/abc138_a) · [C++ solution](../../solutions/atcoder/implementation/abc138_a_red_or_not.cpp)

## Try first

At the inclusive threshold 3200 the supplied color is used; lower ratings produce red.

## Reasoning

At the inclusive threshold 3200 the supplied color is used; lower ratings produce red.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep input text as std::string when leading zeros or decimal digits matter. Convert one-based positions to zero-based indices before accessing characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
