# Piano 3

[Original problem](https://atcoder.jp/contests/abc369/tasks/abc369_b) · [C++ solution](../../solutions/atcoder/implementation/abc369_b_piano_3.cpp)

## Try first

Place each hand initially at its first required key for zero cost.

## Reasoning

Place each hand initially at its first required key for zero cost. Thereafter that hand must travel between its successive required keys, so sum those absolute differences independently for both hands.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Subtract coordinates in a sufficiently wide signed type before applying abs or squaring. The operand types determine the arithmetic width of the intermediate result.

## Watch for

Squared distances can exceed individual coordinate bounds; ties and zero differences deserve separate attention.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
