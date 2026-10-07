# Raise Both Hands

[Original problem](https://atcoder.jp/contests/abc370/tasks/abc370_a) · [C++ solution](../../solutions/atcoder/implementation/abc370_a_raise_both_hands.cpp)

## Try first

Equal hand states mean both or neither is raised, which is invalid.

## Reasoning

Equal hand states mean both or neither is raised, which is invalid. Otherwise the left-only state means Yes and the right-only state means No.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
