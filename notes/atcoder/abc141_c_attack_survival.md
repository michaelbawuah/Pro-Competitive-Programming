# Attack Survival

[Original problem](https://atcoder.jp/contests/abc141/tasks/abc141_c) · [C++ solution](../../solutions/atcoder/implementation/abc141_c_attack_survival.cpp)

## Try first

Charge every player one point for every answer, then refund the answering player.

## Reasoning

Charge every player one point for every answer, then refund the answering player. Final score is K-Q plus that player answer count, and survival requires a strictly positive result.

## Cost

- Time: **O(n+q)**.
- Extra space: **O(n)**.

## C++ takeaway

Initialize counters and container entries before scanning. A range-based loop with int& can read directly into a vector; a loop by value only copies each entry.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
