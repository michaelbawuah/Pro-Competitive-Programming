# Seismic magnitude scales

[Original problem](https://atcoder.jp/contests/abc221/tasks/abc221_a) · [C++ solution](../../solutions/atcoder/implementation/abc221_a_seismic_magnitude_scales.cpp)

## Try first

Every unit of magnitude difference contributes a factor of thirty-two.

## Reasoning

Every unit of magnitude difference contributes a factor of thirty-two. Multiply that many factors, with zero differences giving one.

## Cost

- Time: **O(A-B)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
