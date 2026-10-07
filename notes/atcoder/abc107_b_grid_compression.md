# Grid Compression

[Original problem](https://atcoder.jp/contests/abc107/tasks/abc107_b) · [C++ solution](../../solutions/atcoder/implementation/abc107_b_grid_compression.cpp)

## Try first

Every black cell must remain, so retain exactly the rows and columns containing one.

## Reasoning

Every black cell must remain, so retain exactly the rows and columns containing one. Deleting all-white lines cannot remove any black cell or change which other lines contain one.

## Cost

- Time: **O(H W)**.
- Extra space: **O(H W)**.

## C++ takeaway

Keep input text as std::string when leading zeros or decimal digits matter. Convert one-based positions to zero-based indices before accessing characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
