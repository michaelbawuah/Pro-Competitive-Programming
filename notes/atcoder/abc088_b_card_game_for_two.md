# Card Game for Two

[Original problem](https://atcoder.jp/contests/abc088/tasks/abc088_b) · [C++ solution](../../solutions/atcoder/implementation/abc088_b_card_game_for_two.cpp)

## Try first

Taking the largest remaining card cannot hurt a player: exchanging it with a later smaller pick weakly improves the score.

## Reasoning

Taking the largest remaining card cannot hurt a player: exchanging it with a later smaller pick weakly improves the score. Sort descending and alternate signs.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::sort rearranges a vector in place. Retain original indices before sorting when the output must preserve input order; use long long when accumulating costs.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
