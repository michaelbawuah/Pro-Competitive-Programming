# Traveling

[Original problem](https://atcoder.jp/contests/abc086/tasks/arc089_a) · [C++ solution](../../solutions/atcoder/implementation/abc086_c_traveling.cpp)

## Try first

The Manhattan distance is the minimum number of moves.

## Reasoning

The Manhattan distance is the minimum number of moves. Any extra even number of moves can be spent on back-and-forth steps, while an odd surplus has the wrong parity.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
