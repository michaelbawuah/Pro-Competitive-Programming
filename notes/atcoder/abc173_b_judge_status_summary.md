# Judge Status Summary

[Original problem](https://atcoder.jp/contests/abc173/tasks/abc173_b) · [C++ solution](../../solutions/atcoder/implementation/abc173_b_judge_status_summary.cpp)

## Try first

Count verdicts by category and emit the four categories in the prescribed order, including categories with zero occurrences..

## Reasoning

Count verdicts by category and emit the four categories in the prescribed order, including categories with zero occurrences.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep input text as std::string when leading zeros or decimal digits matter. Convert one-based positions to zero-based indices before accessing characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
