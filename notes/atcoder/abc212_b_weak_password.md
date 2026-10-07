# Weak Password

[Original problem](https://atcoder.jp/contests/abc212/tasks/abc212_b) · [C++ solution](../../solutions/atcoder/implementation/abc212_b_weak_password.cpp)

## Try first

Track both weak-pattern predicates separately: all digits equal, or every digit one greater modulo ten.

## Reasoning

Track both weak-pattern predicates separately: all digits equal, or every digit one greater modulo ten. Either predicate makes the PIN weak.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
