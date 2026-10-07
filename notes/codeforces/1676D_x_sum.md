# X-Sum

[Original problem](https://codeforces.com/problemset/problem/1676/D) · [C++ solution](../../solutions/codeforces/prefix_sums/1676D_x_sum.cpp)

## Try first

Cells on a diagonal share either row+column or row-column.

## Reasoning

Cells on a diagonal share either row+column or row-column. Precompute both families of sums, then combine the two diagonals through each candidate cell, subtracting that cell once because it was counted twice.

## Cost

- Time: **O(n m) per case**.
- Extra space: **O(n m)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
