# Similar String

[Original problem](https://atcoder.jp/contests/abc303/tasks/abc303_a) · [C++ solution](../../solutions/atcoder/implementation/abc303_a_similar_string.cpp)

## Try first

Map each allowed similarity class to one representative: one to lowercase L and zero to lowercase O.

## Reasoning

Map each allowed similarity class to one representative: one to lowercase L and zero to lowercase O. Then corresponding characters are similar exactly when their representatives match.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
