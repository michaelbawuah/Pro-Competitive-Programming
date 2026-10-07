# String Shifting

[Original problem](https://atcoder.jp/contests/abc223/tasks/abc223_b) · [C++ solution](../../solutions/atcoder/implementation/abc223_b_string_shifting.cpp)

## Try first

Every cyclic rotation is determined by its first position.

## Reasoning

Every cyclic rotation is determined by its first position. Construct all rotations and maintain their lexicographic minimum and maximum.

## Cost

- Time: **O(n^2)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
