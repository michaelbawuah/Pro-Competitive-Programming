# Repetitions

[Original problem](https://cses.fi/problemset/task/1069/) · [C++ solution](../../solutions/cses/introductory/1069_repetitions.cpp)

## Try first

Track the run ending at the current character.

## Reasoning

run is the length of the equal-character suffix processed so far. A change resets it to one; otherwise it grows by one. best is the largest completed or current run, so the final run is also considered.

## Cost

- Time: **O(n)**.
- Extra space: **O(1) beyond input**.

## C++ takeaway

A range-based for loop makes a read-only scan explicit.

## Watch for

Do not forget a longest run that ends at the final character.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
