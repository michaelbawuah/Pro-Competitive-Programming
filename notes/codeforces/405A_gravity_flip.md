# Gravity Flip

[Original problem](https://codeforces.com/problemset/problem/405/A) · [C++ solution](../../solutions/codeforces/sorting/405A_gravity_flip.cpp)

## Try first

At every row, rightward gravity packs occupied cells against the right wall.

## Reasoning

At every row, rightward gravity packs occupied cells against the right wall. Thus final column heights are the original multiset in nondecreasing order, which sorting produces.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
