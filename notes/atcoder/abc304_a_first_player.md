# First Player

[Original problem](https://atcoder.jp/contests/abc304/tasks/abc304_a) · [C++ solution](../../solutions/atcoder/implementation/abc304_a_first_player.cpp)

## Try first

Locate the unique minimum age, then traverse the original seating order cyclically from that index.

## Reasoning

Locate the unique minimum age, then traverse the original seating order cyclically from that index. Modulo N wraps the last seat to the first.

## Cost

- Time: **O(total name length+N)**.
- Extra space: **O(total name length+N)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
