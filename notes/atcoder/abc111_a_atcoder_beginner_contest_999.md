# AtCoder Beginner Contest 999

[Original problem](https://atcoder.jp/contests/abc111/tasks/abc111_a) · [C++ solution](../../solutions/atcoder/implementation/abc111_a_atcoder_beginner_contest_999.cpp)

## Try first

The replacement rule is independent at each character, so transform each digit once..

## Reasoning

The replacement rule is independent at each character, so transform each digit once.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep input text as std::string when leading zeros or decimal digits matter. Convert one-based positions to zero-based indices before accessing characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
