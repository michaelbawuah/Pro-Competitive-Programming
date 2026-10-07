# Go Straight and Turn Right

[Original problem](https://atcoder.jp/contests/abc244/tasks/abc244_b) · [C++ solution](../../solutions/atcoder/implementation/abc244_b_go_straight_and_turn_right.cpp)

## Try first

Store directions in clockwise order starting with east.

## Reasoning

Store directions in clockwise order starting with east. A right turn increments the direction modulo four; a straight move adds the corresponding unit vector.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
