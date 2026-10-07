# Hard Calculation

[Original problem](https://atcoder.jp/contests/abc229/tasks/abc229_b) · [C++ solution](../../solutions/atcoder/implementation/abc229_b_hard_calculation.cpp)

## Try first

A first carry exists exactly when some pair of aligned digits sums to at least ten.

## Reasoning

A first carry exists exactly when some pair of aligned digits sums to at least ten. If no such pair exists, there can be no incoming carry either.

## Cost

- Time: **O(log(max(A,B)))**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
