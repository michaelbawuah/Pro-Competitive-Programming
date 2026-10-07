# Same Name

[Original problem](https://atcoder.jp/contests/abc216/tasks/abc216_b) · [C++ solution](../../solutions/atcoder/implementation/abc216_b_same_name.cpp)

## Try first

Use the ordered pair of names as the identity key.

## Reasoning

Use the ordered pair of names as the identity key. A failed insertion detects a previous person with both matching names.

## Cost

- Time: **O(n L log n)**.
- Extra space: **O(n L)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
