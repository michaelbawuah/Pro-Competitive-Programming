# Trimmed Mean

[Original problem](https://atcoder.jp/contests/abc291/tasks/abc291_b) · [C++ solution](../../solutions/atcoder/implementation/abc291_b_trimmed_mean.cpp)

## Try first

Sorting places the N smallest and N largest grades at the ends.

## Reasoning

Sorting places the N smallest and N largest grades at the ends. Sum exactly the middle 3N entries and divide in floating point.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
