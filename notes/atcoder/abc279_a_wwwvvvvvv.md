# wwwvvvvvv

[Original problem](https://atcoder.jp/contests/abc279/tasks/abc279_a) · [C++ solution](../../solutions/atcoder/implementation/abc279_a_wwwvvvvvv.cpp)

## Try first

Each v contributes one bottom and each w contributes two.

## Reasoning

Each v contributes one bottom and each w contributes two. Add these independent per-character contributions.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
