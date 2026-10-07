# The bottom of the ninth

[Original problem](https://atcoder.jp/contests/abc351/tasks/abc351_a) · [C++ solution](../../solutions/atcoder/implementation/abc351_a_the_bottom_of_the_ninth.cpp)

## Try first

Subtract Aoki current total from Takahashi final total.

## Reasoning

Subtract Aoki current total from Takahashi final total. Aoki needs that deficit plus one to finish strictly ahead rather than tied.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
