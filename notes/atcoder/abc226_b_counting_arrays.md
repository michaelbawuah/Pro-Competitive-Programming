# Counting Arrays

[Original problem](https://atcoder.jp/contests/abc226/tasks/abc226_b) · [C++ solution](../../solutions/atcoder/implementation/abc226_b_counting_arrays.cpp)

## Try first

Store entire sequences as ordered-set keys.

## Reasoning

Store entire sequences as ordered-set keys. Vector comparison includes both element values and length, so identical sequences coalesce and different ones remain.

## Cost

- Time: **O(L log n), L = total input length**.
- Extra space: **O(L)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
