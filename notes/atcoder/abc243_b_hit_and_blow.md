# Hit and Blow

[Original problem](https://atcoder.jp/contests/abc243/tasks/abc243_b) · [C++ solution](../../solutions/atcoder/implementation/abc243_b_hit_and_blow.cpp)

## Try first

Compare every pair of positions across the sequences.

## Reasoning

Compare every pair of positions across the sequences. A matching pair contributes to hits when its indices agree and to blows otherwise. Distinct elements prevent duplicate counting.

## Cost

- Time: **O(n^2)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
