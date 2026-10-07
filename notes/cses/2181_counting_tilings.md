# Counting Tilings

[Original problem](https://cses.fi/problemset/task/2181/) · [C++ solution](../../solutions/cses/profile_dp/2181_counting_tilings.cpp)

## Try first

A column mask records cells already occupied by horizontal dominoes from the preceding column.

## Reasoning

A column mask records cells already occupied by horizontal dominoes from the preceding column. Recursively fill its first free cell either vertically within the column or horizontally into the next. Propagate counts through those transitions, accepting only zero carry after the final column.

## Cost

- Time: **O(m 4^n)**.
- Extra space: **O(4^n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
