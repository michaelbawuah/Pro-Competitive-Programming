# Linear Keyboard

[Original problem](https://codeforces.com/problemset/problem/1607/A) · [C++ solution](../../solutions/codeforces/strings/1607A_linear_keyboard.cpp)

## Try first

Invert the keyboard permutation to map each letter to its position.

## Reasoning

Invert the keyboard permutation to map each letter to its position. Sum absolute differences between consecutive typed letters; the first letter requires no travel.

## Cost

- Time: **O(n) per case**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
