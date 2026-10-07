# MissingNo.

[Original problem](https://atcoder.jp/contests/abc317/tasks/abc317_b) · [C++ solution](../../solutions/atcoder/implementation/abc317_b_missingno.cpp)

## Try first

Uniqueness rules out a missing endpoint, so the missing number lies inside the sorted range.

## Reasoning

Uniqueness rules out a missing endpoint, so the missing number lies inside the sorted range. It is the sole gap of two between adjacent remaining numbers.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
