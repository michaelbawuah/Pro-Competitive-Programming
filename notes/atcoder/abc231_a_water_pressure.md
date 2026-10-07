# Water Pressure

[Original problem](https://atcoder.jp/contests/abc231/tasks/abc231_a) · [C++ solution](../../solutions/atcoder/implementation/abc231_a_water_pressure.cpp)

## Try first

One hectopascal is one hundred pascals, so divide the input by one hundred in floating point.

## Reasoning

One hectopascal is one hundred pascals, so divide the input by one hundred in floating point.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

setprecision controls significant digits unless fixed is enabled. Compute with floating-point operands before division, then print enough digits for the stated error tolerance.

## Watch for

Avoid integer division before conversion, and treat exact-format decimal tasks differently from tolerance-based outputs.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
