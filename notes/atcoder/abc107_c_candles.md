# Candles

[Original problem](https://atcoder.jp/contests/abc107/tasks/arc101_a) · [C++ solution](../../solutions/atcoder/sliding_window/abc107_c_candles.cpp)

## Try first

Any visited interval includes a consecutive block of K candles.

## Reasoning

Any visited interval includes a consecutive block of K candles. To cover its endpoints, travel first to the nearer endpoint then across the interval; minimizing over all blocks gives the optimum.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Use long long before multiplying or accumulating large quantities. Assigning an already-overflowed int expression to long long does not repair it.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
