# Batters

[Original problem](https://atcoder.jp/contests/abc256/tasks/abc256_b) · [C++ solution](../../solutions/atcoder/implementation/abc256_b_batters.cpp)

## Try first

Insert the new batter at zero, then move every existing piece into a fresh array so movement is simultaneous.

## Reasoning

Insert the new batter at zero, then move every existing piece into a fresh array so movement is simultaneous. Destinations at least four score and disappear.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
