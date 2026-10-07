# Counterclockwise Rotation

[Original problem](https://atcoder.jp/contests/abc259/tasks/abc259_b) · [C++ solution](../../solutions/atcoder/implementation/abc259_b_counterclockwise_rotation.cpp)

## Try first

Convert degrees to radians and apply the counterclockwise rotation matrix.

## Reasoning

Convert degrees to radians and apply the counterclockwise rotation matrix. Use the original coordinates in both formulas so the second result does not depend on an already-updated first coordinate.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
