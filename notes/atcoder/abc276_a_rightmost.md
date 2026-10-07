# Rightmost

[Original problem](https://atcoder.jp/contests/abc276/tasks/abc276_a) · [C++ solution](../../solutions/atcoder/implementation/abc276_a_rightmost.cpp)

## Try first

Scan left to right and overwrite the answer at every occurrence of a.

## Reasoning

Scan left to right and overwrite the answer at every occurrence of a. The final stored index is the rightmost; the initial minus one survives if none occurs.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
