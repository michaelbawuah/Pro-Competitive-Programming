# Who is missing?

[Original problem](https://atcoder.jp/contests/abc236/tasks/abc236_b) · [C++ solution](../../solutions/atcoder/implementation/abc236_b_who_is_missing.cpp)

## Try first

Four equal copies XOR to zero.

## Reasoning

Four equal copies XOR to zero. The value with one missing copy occurs three times and XORs to itself, so XORing the entire input recovers it.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
