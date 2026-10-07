# Blood Pressure

[Original problem](https://atcoder.jp/contests/abc211/tasks/abc211_a) · [C++ solution](../../solutions/atcoder/implementation/abc211_a_blood_pressure.cpp)

## Try first

Evaluate the supplied expression in floating point so division by three retains its fractional part.

## Reasoning

Evaluate the supplied expression in floating point so division by three retains its fractional part.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

setprecision controls significant digits unless fixed is enabled. Compute with floating-point operands before division, then print enough digits for the stated error tolerance.

## Watch for

Avoid integer division before conversion, and treat exact-format decimal tasks differently from tolerance-based outputs.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
