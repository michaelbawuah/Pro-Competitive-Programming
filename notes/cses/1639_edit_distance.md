# Edit Distance

[Original problem](https://cses.fi/problemset/task/1639/) · [C++ solution](../../solutions/cses/dynamic_programming/1639_edit_distance.cpp)

## Try first

Relate two prefixes by the last insertion, deletion, or replacement.

## Reasoning

For each pair of prefixes, the last operation either removes a character from a, adds one from b, or aligns their final characters with a possible replacement. Minimize over those alternatives. Only the previous row and the current row’s left cell are needed.

## Cost

- Time: **O(n * m)**.
- Extra space: **O(min(n, m)) beyond input**.

## C++ takeaway

vector::swap exchanges storage in constant time. Keep the shorter string as the column dimension.

## Watch for

Use the old diagonal value for substitution, not a just-updated cell.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
