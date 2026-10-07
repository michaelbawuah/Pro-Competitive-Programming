# Count ABC

[Original problem](https://atcoder.jp/contests/abc150/tasks/abc150_b) · [C++ solution](../../solutions/atcoder/implementation/abc150_b_count_abc.cpp)

## Try first

Test every start with room for three characters.

## Reasoning

Test every start with room for three characters. A matching substring contributes one occurrence.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
