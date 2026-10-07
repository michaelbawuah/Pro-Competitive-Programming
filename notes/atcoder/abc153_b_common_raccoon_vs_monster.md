# Common Raccoon vs Monster

[Original problem](https://atcoder.jp/contests/abc153/tasks/abc153_b) · [C++ solution](../../solutions/atcoder/implementation/abc153_b_common_raccoon_vs_monster.cpp)

## Try first

Every move can be used once and deals positive damage, so their sum is the maximum available damage..

## Reasoning

Every move can be used once and deals positive damage, so their sum is the maximum available damage.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
