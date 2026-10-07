# T-shirt

[Original problem](https://atcoder.jp/contests/abc242/tasks/abc242_a) · [C++ solution](../../solutions/atcoder/implementation/abc242_a_t_shirt.cpp)

## Try first

Ranks through A always win, ranks above B never win, and each of the B-A middle ranks has the same inclusion probability C/(B-A).

## Reasoning

Ranks through A always win, ranks above B never win, and each of the B-A middle ranks has the same inclusion probability C/(B-A).

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

setprecision controls significant digits unless fixed is enabled. Compute with floating-point operands before division, then print enough digits for the stated error tolerance.

## Watch for

Avoid integer division before conversion, and treat exact-format decimal tasks differently from tolerance-based outputs.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
