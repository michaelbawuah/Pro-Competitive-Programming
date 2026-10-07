# Grid Walk

[Original problem](https://atcoder.jp/contests/abc364/tasks/abc364_b) · [C++ solution](../../solutions/atcoder/implementation/abc364_b_grid_walk.cpp)

## Try first

For every command, compute a candidate destination without changing the current state.

## Reasoning

For every command, compute a candidate destination without changing the current state. Commit the move only when the destination is inside the grid and empty.

## Cost

- Time: **O(HW+|X|)**.
- Extra space: **O(HW+|X|)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
