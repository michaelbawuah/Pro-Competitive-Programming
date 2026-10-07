# Poll

[Original problem](https://atcoder.jp/contests/abc155/tasks/abc155_c) · [C++ solution](../../solutions/atcoder/counting/abc155_c_poll.cpp)

## Try first

Count votes per string and track the largest frequency.

## Reasoning

Count votes per string and track the largest frequency. Iterating an ordered map prints exactly the tied winners in lexicographic order.

## Cost

- Time: **O(n L log n)**.
- Extra space: **O(n L)**.

## C++ takeaway

std::map stores keys in sorted order. Its operator[] creates a missing key with a zero-initialized value, useful for frequency counting.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
