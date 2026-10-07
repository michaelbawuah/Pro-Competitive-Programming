# Divisibility Problem

[Original problem](https://codeforces.com/problemset/problem/1328/A) · [C++ solution](../../solutions/codeforces/mathematics/1328A_divisibility_problem.cpp)

## Try first

Only the remainder of a modulo b matters.

## Reasoning

Only the remainder of a modulo b matters. Add its distance to the next multiple, with a final modulo operation making an already divisible number require zero moves.

## Cost

- Time: **O(1) per case**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
