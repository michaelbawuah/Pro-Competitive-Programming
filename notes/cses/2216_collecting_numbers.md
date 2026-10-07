# Collecting Numbers

[Original problem](https://cses.fi/problemset/task/2216/) · [C++ solution](../../solutions/cses/sorting_searching/2216_collecting_numbers.cpp)

## Try first

Look at the positions of consecutive values rather than repeatedly scanning the array.

## Reasoning

While collecting values in increasing order during one left-to-right pass, the next value can be collected only if it lies to the right of the current one. Every descent in the position sequence forces exactly one new pass.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

An inverse permutation maps each value directly to its index.

## Watch for

Count the first pass even when the permutation is already ordered.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
