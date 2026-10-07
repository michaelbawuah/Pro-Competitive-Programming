# A to Z String 2

[Original problem](https://atcoder.jp/contests/abc257/tasks/abc257_a) · [C++ solution](../../solutions/atcoder/implementation/abc257_a_a_to_z_string_2.cpp)

## Try first

Each letter occupies a block of N positions.

## Reasoning

Each letter occupies a block of N positions. The zero-based block index of position X is (X-1)/N.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
