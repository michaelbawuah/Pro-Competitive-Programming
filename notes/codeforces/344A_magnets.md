# Magnets

[Original problem](https://codeforces.com/problemset/problem/344/A) · [C++ solution](../../solutions/codeforces/simulation/344A_magnets.cpp)

## Try first

A new group starts exactly when the orientation changes from the previous magnet.

## Reasoning

A new group starts exactly when the orientation changes from the previous magnet. Treat the first magnet as different from an empty previous orientation, counting its initial group.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
