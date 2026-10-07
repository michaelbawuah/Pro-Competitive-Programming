# Cut .0

[Original problem](https://atcoder.jp/contests/abc367/tasks/abc367_b) · [C++ solution](../../solutions/atcoder/implementation/abc367_b_cut_0.cpp)

## Try first

The input has exactly three decimal places.

## Reasoning

The input has exactly three decimal places. Remove trailing fractional zeros, then remove the decimal point only if no fractional digits remain; the integer part is preserved even for zero.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
