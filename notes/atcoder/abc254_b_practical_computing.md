# Practical Computing

[Original problem](https://atcoder.jp/contests/abc254/tasks/abc254_b) · [C++ solution](../../solutions/atcoder/implementation/abc254_b_practical_computing.cpp)

## Try first

Build Pascal rows from left and right parent entries while fixing both boundary entries to one.

## Reasoning

Build Pascal rows from left and right parent entries while fixing both boundary entries to one. Keep the previous row intact until the next row is fully computed.

## Cost

- Time: **O(n^2)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
