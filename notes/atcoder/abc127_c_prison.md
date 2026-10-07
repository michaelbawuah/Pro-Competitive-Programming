# Prison

[Original problem](https://atcoder.jp/contests/abc127/tasks/abc127_c) · [C++ solution](../../solutions/atcoder/implementation/abc127_c_prison.cpp)

## Try first

A card works at every gate exactly when it is in the intersection of all inclusive intervals.

## Reasoning

A card works at every gate exactly when it is in the intersection of all inclusive intervals. Retain the maximum left endpoint and minimum right endpoint.

## Cost

- Time: **O(M)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
