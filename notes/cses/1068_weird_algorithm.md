# Weird Algorithm

[Original problem](https://cses.fi/problemset/task/1068/) · [C++ solution](../../solutions/cses/introductory/1068_weird_algorithm.cpp)

## Try first

Follow the rule literally; consider the type of every intermediate value.

## Reasoning

After printing a value, apply exactly one transition. Stop immediately after printing 1. L is the number of values emitted; this solution does not assume a logarithmic bound on Collatz sequence length.

## Cost

- Time: **O(L) steps**.
- Extra space: **O(1)**.

## C++ takeaway

Use long long: intermediate values can exceed the starting input and the range of int.

## Watch for

Handle n = 1 without printing extra values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
