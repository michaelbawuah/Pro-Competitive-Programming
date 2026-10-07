# Quizzes

[Original problem](https://atcoder.jp/contests/abc184/tasks/abc184_b) · [C++ solution](../../solutions/atcoder/implementation/abc184_b_quizzes.cpp)

## Try first

Process answers in order because the zero floor makes order matter.

## Reasoning

Process answers in order because the zero floor makes order matter. Correct answers add one; incorrect answers decrement only above zero.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
