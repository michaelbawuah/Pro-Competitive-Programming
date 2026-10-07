# kcal

[Original problem](https://atcoder.jp/contests/abc205/tasks/abc205_a) · [C++ solution](../../solutions/atcoder/implementation/abc205_a_kcal.cpp)

## Try first

Scale energy per hundred milliliters by B/100 using floating-point arithmetic.

## Reasoning

Scale energy per hundred milliliters by B/100 using floating-point arithmetic.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

setprecision controls significant digits unless fixed is enabled. Compute with floating-point operands before division, then print enough digits for the stated error tolerance.

## Watch for

Avoid integer division before conversion, and treat exact-format decimal tasks differently from tolerance-based outputs.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
