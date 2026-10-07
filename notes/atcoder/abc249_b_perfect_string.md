# Perfect String

[Original problem](https://atcoder.jp/contests/abc249/tasks/abc249_b) · [C++ solution](../../solutions/atcoder/implementation/abc249_b_perfect_string.cpp)

## Try first

Track the presence of both letter cases and count distinct characters.

## Reasoning

Track the presence of both letter cases and count distinct characters. All requirements hold exactly when both cases occur and the distinct count equals the string length.

## Cost

- Time: **O(n log 52)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
