# Roulette

[Original problem](https://atcoder.jp/contests/abc314/tasks/abc314_b) · [C++ solution](../../solutions/atcoder/implementation/abc314_b_roulette.cpp)

## Try first

Consider only people who bet on the outcome.

## Reasoning

Consider only people who bet on the outcome. Track their minimum number of bets, clear older candidates when a smaller count appears, and retain all ties in original index order.

## Cost

- Time: **O(total bets)**.
- Extra space: **O(total bets+N)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
