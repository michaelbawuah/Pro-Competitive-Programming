# Get Closer

[Original problem](https://atcoder.jp/contests/abc246/tasks/abc246_b) · [C++ solution](../../solutions/atcoder/implementation/abc246_b_get_closer.cpp)

## Try first

Divide the displacement vector by its positive Euclidean length.

## Reasoning

Divide the displacement vector by its positive Euclidean length. Scaling preserves direction and gives length one.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

setprecision controls significant digits unless fixed is enabled. Compute with floating-point operands before division, then print enough digits for the stated error tolerance.

## Watch for

Avoid integer division before conversion, and treat exact-format decimal tasks differently from tolerance-based outputs.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
