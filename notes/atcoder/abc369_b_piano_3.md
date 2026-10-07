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

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
