# Tap Dance

[Original problem](https://atcoder.jp/contests/abc141/tasks/abc141_b) · [C++ solution](../../solutions/atcoder/implementation/abc141_b_tap_dance.cpp)

## Try first

At zero-based even positions forbid L; at zero-based odd positions forbid R.

## Reasoning

At zero-based even positions forbid L; at zero-based odd positions forbid R. Vertical moves are permitted at either parity.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
