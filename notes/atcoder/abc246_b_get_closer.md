# Get Closer

[Original problem](https://atcoder.jp/contests/abc246/tasks/abc246_b) · [C++ solution](../../solutions/atcoder/implementation/abc246_b_get_closer.cpp)

## Try first

Divide the displacement vector by its positive Euclidean length.

## Reasoning

Divide the displacement vector by its positive Euclidean length. Scaling preserves direction and gives length one.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
