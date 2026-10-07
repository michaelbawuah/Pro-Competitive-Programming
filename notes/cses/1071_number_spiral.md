# Number Spiral

[Original problem](https://cses.fi/problemset/task/1071/) · [C++ solution](../../solutions/cses/introductory/1071_number_spiral.cpp)

## Try first

The larger coordinate determines the square layer; parity determines its direction.

## Reasoning

Layer k contains values after (k-1)^2 up to k^2. Its direction alternates by parity. Move along the outer row or column from the appropriate endpoint to obtain the formula without constructing the grid.

## Cost

- Time: **O(q)**.
- Extra space: **O(1)**.

## C++ takeaway

Coordinates and their squares must be long long before multiplication.

## Watch for

The input order is row then column.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
