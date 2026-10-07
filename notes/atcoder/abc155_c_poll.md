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

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
