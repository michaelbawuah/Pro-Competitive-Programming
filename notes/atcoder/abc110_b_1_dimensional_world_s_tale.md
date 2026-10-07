# 1 Dimensional World's Tale

[Original problem](https://atcoder.jp/contests/abc110/tasks/abc110_b) · [C++ solution](../../solutions/atcoder/implementation/abc110_b_1_dimensional_world_s_tale.cpp)

## Try first

Combine all strict lower bounds into their maximum and all inclusive upper bounds into their minimum.

## Reasoning

Combine all strict lower bounds into their maximum and all inclusive upper bounds into their minimum. An integer exists between them exactly when the lower bound is smaller.

## Cost

- Time: **O(n+m)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
