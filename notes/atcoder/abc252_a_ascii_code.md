# ASCII code

[Original problem](https://atcoder.jp/contests/abc252/tasks/abc252_a) · [C++ solution](../../solutions/atcoder/implementation/abc252_a_ascii_code.cpp)

## Try first

The supplied code is an offset from ninety-seven.

## Reasoning

The supplied code is an offset from ninety-seven. Add that offset to the lowercase first letter to recover the requested character.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
