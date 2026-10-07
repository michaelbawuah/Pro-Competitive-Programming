# Light It Up

[Original problem](https://atcoder.jp/contests/abc255/tasks/abc255_b) · [C++ solution](../../solutions/atcoder/implementation/abc255_b_light_it_up.cpp)

## Try first

Each person requires a radius at least their distance to the nearest lamp.

## Reasoning

Each person requires a radius at least their distance to the nearest lamp. The largest of these nearest distances is both necessary and sufficient to illuminate everyone. Compare squared distances in 64-bit integers.

## Cost

- Time: **O(NK)**.
- Extra space: **O(N+K)**.

## C++ takeaway

setprecision controls significant digits unless fixed is enabled. Compute with floating-point operands before division, then print enough digits for the stated error tolerance.

## Watch for

Avoid integer division before conversion, and treat exact-format decimal tasks differently from tolerance-based outputs.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
