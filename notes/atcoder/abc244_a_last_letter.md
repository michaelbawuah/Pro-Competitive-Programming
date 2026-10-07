# Last Letter

[Original problem](https://atcoder.jp/contests/abc244/tasks/abc244_a) · [C++ solution](../../solutions/atcoder/implementation/abc244_a_last_letter.cpp)

## Try first

The input guarantees a nonempty string.

## Reasoning

The input guarantees a nonempty string. Its back element is exactly the requested final character.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
