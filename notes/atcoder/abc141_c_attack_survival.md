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

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
