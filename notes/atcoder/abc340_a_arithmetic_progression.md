# Arithmetic Progression

[Original problem](https://atcoder.jp/contests/abc340/tasks/abc340_a) · [C++ solution](../../solutions/atcoder/implementation/abc340_a_arithmetic_progression.cpp)

## Try first

Begin at the first term and repeatedly add the positive common difference.

## Reasoning

Begin at the first term and repeatedly add the positive common difference. The existence guarantee ensures that the final emitted term is exactly B.

## Cost

- Time: **O((B-A)/D+1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
