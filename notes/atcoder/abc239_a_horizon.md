# Horizon

[Original problem](https://atcoder.jp/contests/abc239/tasks/abc239_a) · [C++ solution](../../solutions/atcoder/implementation/abc239_a_horizon.cpp)

## Try first

Evaluate the given square-root expression using floating-point multiplication and enough output precision.

## Reasoning

Evaluate the given square-root expression using floating-point multiplication and enough output precision.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

setprecision controls significant digits unless fixed is enabled. Compute with floating-point operands before division, then print enough digits for the stated error tolerance.

## Watch for

Avoid integer division before conversion, and treat exact-format decimal tasks differently from tolerance-based outputs.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
