# String Rotation

[Original problem](https://atcoder.jp/contests/abc103/tasks/abc103_b) · [C++ solution](../../solutions/atcoder/implementation/abc103_b_string_rotation.cpp)

## Try first

Every cyclic rotation of S is a length-|S| substring of S concatenated with itself.

## Reasoning

Every cyclic rotation of S is a length-|S| substring of S concatenated with itself. Equal input lengths make substring membership sufficient.

## Cost

- Time: **O(n^2)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
