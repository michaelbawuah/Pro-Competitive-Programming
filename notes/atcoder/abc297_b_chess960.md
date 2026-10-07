# chess960

[Original problem](https://atcoder.jp/contests/abc297/tasks/abc297_b) · [C++ solution](../../solutions/atcoder/implementation/abc297_b_chess960.cpp)

## Try first

Record both bishop and rook positions and the king position.

## Reasoning

Record both bishop and rook positions and the king position. Opposite bishop parity and strict placement of the king between the two rooks are precisely the required conditions.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
