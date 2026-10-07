# AtCoder Quiz 2

[Original problem](https://atcoder.jp/contests/abc219/tasks/abc219_a) · [C++ solution](../../solutions/atcoder/implementation/abc219_a_atcoder_quiz_2.cpp)

## Try first

Choose the first rank threshold strictly above the score and subtract the score.

## Reasoning

Choose the first rank threshold strictly above the score and subtract the score. Scores at least ninety have no higher rank.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
