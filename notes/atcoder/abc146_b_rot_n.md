# ROT N

[Original problem](https://atcoder.jp/contests/abc146/tasks/abc146_b) · [C++ solution](../../solutions/atcoder/implementation/abc146_b_rot_n.cpp)

## Try first

Convert each letter to an index, add the shift modulo 26, and convert back; modulo implements the wrap from Z to A..

## Reasoning

Convert each letter to an index, add the shift modulo 26, and convert back; modulo implements the wrap from Z to A.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
