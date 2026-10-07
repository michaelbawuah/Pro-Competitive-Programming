# Substring

[Original problem](https://atcoder.jp/contests/abc177/tasks/abc177_b) · [C++ solution](../../solutions/atcoder/implementation/abc177_b_substring.cpp)

## Try first

For each legal alignment, exactly its mismatched characters need replacing.

## Reasoning

For each legal alignment, exactly its mismatched characters need replacing. Minimize that count over every possible starting position.

## Cost

- Time: **O(|S||T|)**.
- Extra space: **O(|S|+|T|)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
