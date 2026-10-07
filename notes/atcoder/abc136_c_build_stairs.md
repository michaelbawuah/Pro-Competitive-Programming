# Build Stairs

[Original problem](https://atcoder.jp/contests/abc136/tasks/abc136_c) · [C++ solution](../../solutions/atcoder/greedy/abc136_c_build_stairs.cpp)

## Try first

Choose the smallest allowed current height that is at least the previous chosen height.

## Reasoning

Choose the smallest allowed current height that is at least the previous chosen height. This leaves the weakest possible lower bound for future positions, so failure rules out every construction.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
