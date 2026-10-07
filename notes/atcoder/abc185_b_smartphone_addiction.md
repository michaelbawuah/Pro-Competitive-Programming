# Smartphone Addiction

[Original problem](https://atcoder.jp/contests/abc185/tasks/abc185_b) · [C++ solution](../../solutions/atcoder/implementation/abc185_b_smartphone_addiction.cpp)

## Try first

Subtract charge used between cafe visits, checking strictly positive charge before recharging.

## Reasoning

Subtract charge used between cafe visits, checking strictly positive charge before recharging. Add the cafe duration capped at capacity, then check the final trip home.

## Cost

- Time: **O(M)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
