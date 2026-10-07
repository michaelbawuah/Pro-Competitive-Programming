# Puzzles

[Original problem](https://codeforces.com/problemset/problem/337/A) · [C++ solution](../../solutions/codeforces/sorting/337A_puzzles.cpp)

## Try first

Sort puzzle sizes and examine consecutive blocks of n choices.

## Reasoning

Sort puzzle sizes and examine consecutive blocks of n choices. Any nonconsecutive selection can replace skipped interior sizes without enlarging its minimum-to-maximum range, so some optimal selection is a block.

## Cost

- Time: **O(m log m)**.
- Extra space: **O(m)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
