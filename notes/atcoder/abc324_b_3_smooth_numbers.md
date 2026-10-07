# 3-smooth Numbers

[Original problem](https://atcoder.jp/contests/abc324/tasks/abc324_b) · [C++ solution](../../solutions/atcoder/implementation/abc324_b_3_smooth_numbers.cpp)

## Try first

Remove all factors of two and three.

## Reasoning

Remove all factors of two and three. The remainder is one precisely when the original positive integer has no other prime factor, including the case N=1 with both exponents zero.

## Cost

- Time: **O(log N)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
