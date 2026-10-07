# Sanitize Hands

[Original problem](https://atcoder.jp/contests/abc357/tasks/abc357_a) · [C++ solution](../../solutions/atcoder/implementation/abc357_a_sanitize_hands.cpp)

## Try first

Process aliens in arrival order.

## Reasoning

Process aliens in arrival order. Count one only if all their hands can be disinfected, then consume their requested amount or all remaining supply when insufficient. Once empty, no later alien succeeds.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
