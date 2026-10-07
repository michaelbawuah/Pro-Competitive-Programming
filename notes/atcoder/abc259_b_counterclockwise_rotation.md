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

setprecision controls significant digits unless fixed is enabled. Compute with floating-point operands before division, then print enough digits for the stated error tolerance.

## Watch for

Avoid integer division before conversion, and treat exact-format decimal tasks differently from tolerance-based outputs.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
