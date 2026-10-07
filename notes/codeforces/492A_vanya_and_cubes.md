# Vanya and Cubes

[Original problem](https://codeforces.com/problemset/problem/492/A) · [C++ solution](../../solutions/codeforces/simulation/492A_vanya_and_cubes.cpp)

## Try first

Successive levels require triangular numbers of cubes.

## Reasoning

Successive levels require triangular numbers of cubes. Maintain the next triangular number, consume it only when affordable, and stop at the first level that cannot be completed.

## Cost

- Time: **O(n^(1/3))**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

A level requires 1+2+...+height cubes, not merely height cubes.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
