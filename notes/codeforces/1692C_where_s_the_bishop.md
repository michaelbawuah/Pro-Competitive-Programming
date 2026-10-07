# Where's the Bishop?

[Original problem](https://codeforces.com/problemset/problem/1692/C) · [C++ solution](../../solutions/codeforces/grid/1692C_where_s_the_bishop.cpp)

## Try first

The bishop is the intersection of the two marked diagonals.

## Reasoning

The bishop is the intersection of the two marked diagonals. Its four diagonal neighbors are marked, whereas any other marked cell belongs to only one of the two diagonals. Search interior cells and report the intersection.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
