# Failing Grade

[Original problem](https://atcoder.jp/contests/abc222/tasks/abc222_b) · [C++ solution](../../solutions/atcoder/implementation/abc222_b_failing_grade.cpp)

## Try first

Failing means strictly below P; count those scores and preserve passing scores equal to the threshold..

## Reasoning

Failing means strictly below P; count those scores and preserve passing scores equal to the threshold.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
