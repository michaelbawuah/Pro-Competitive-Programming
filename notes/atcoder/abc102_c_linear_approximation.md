# Linear Approximation

[Original problem](https://atcoder.jp/contests/abc102/tasks/arc100_a) · [C++ solution](../../solutions/atcoder/sorting/abc102_c_linear_approximation.cpp)

## Try first

Subtract the one-based index from each value.

## Reasoning

Subtract the one-based index from each value. The objective becomes a sum of absolute distances to b, minimized by any median because moving toward the median cannot increase the sum.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
