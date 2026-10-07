# ABCDEFG

[Original problem](https://atcoder.jp/contests/abc305/tasks/abc305_b) · [C++ solution](../../solutions/atcoder/implementation/abc305_b_abcdefg.cpp)

## Try first

Prefix sums of the adjacent distances give coordinates along the line.

## Reasoning

Prefix sums of the adjacent distances give coordinates along the line. The distance between any two points is the absolute difference of their coordinates.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Subtract coordinates in a sufficiently wide signed type before applying abs or squaring. The operand types determine the arithmetic width of the intermediate result.

## Watch for

Squared distances can exceed individual coordinate bounds; ties and zero differences deserve separate attention.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
