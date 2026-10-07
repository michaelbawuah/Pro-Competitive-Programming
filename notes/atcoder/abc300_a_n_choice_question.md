# N-choice question

[Original problem](https://atcoder.jp/contests/abc300/tasks/abc300_a) · [C++ solution](../../solutions/atcoder/implementation/abc300_a_n_choice_question.cpp)

## Try first

Compute the required sum and scan the answer choices with one-based indices.

## Reasoning

Compute the required sum and scan the answer choices with one-based indices. The promised unique matching value identifies the correct choice.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
