# Stones on the Table

[Original problem](https://codeforces.com/problemset/problem/266/A) · [C++ solution](../../solutions/codeforces/strings/266A_stones_on_the_table.cpp)

## Try first

Keep one stone from each maximal run of equal colors.

## Reasoning

Keep one stone from each maximal run of equal colors. A run of length k requires k-1 removals, exactly the number of equal adjacent pairs inside it.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
