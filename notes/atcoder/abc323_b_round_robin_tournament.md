# Round-Robin Tournament

[Original problem](https://atcoder.jp/contests/abc323/tasks/abc323_b) · [C++ solution](../../solutions/atcoder/implementation/abc323_b_round_robin_tournament.cpp)

## Try first

Count wins for each player.

## Reasoning

Count wins for each player. Sorting by negative win count and then player number gives more wins first and smaller indices first on ties.

## Cost

- Time: **O(n^2+n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
