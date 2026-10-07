# Ruined Square

[Original problem](https://atcoder.jp/contests/abc108/tasks/abc108_b) · [C++ solution](../../solutions/atcoder/implementation/abc108_b_ruined_square.cpp)

## Try first

Rotate the edge vector counterclockwise by ninety degrees: (dx,dy) becomes (-dy,dx).

## Reasoning

Rotate the edge vector counterclockwise by ninety degrees: (dx,dy) becomes (-dy,dx). Adding it to both known endpoints gives the other two vertices.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
