# Digit Queries

[Original problem](https://cses.fi/problemset/task/2431/) · [C++ solution](../../solutions/cses/introductory/2431_digit_queries.cpp)

## Try first

Skip complete blocks of one-digit, two-digit, and longer numbers.

## Reasoning

There are 9*10^(d-1) d-digit numbers, occupying d times that many positions. After skipping whole blocks, zero-based division identifies the number and the remainder identifies the digit inside it. For k <= 10^18 the loop stops by the 17-digit block, whose product fits long long.

## Cost

- Time: **O(q log k)**.
- Extra space: **O(log k)**.

## C++ takeaway

Convert only the final number to a string; never build the entire concatenation.

## Watch for

Positions are 1-based, so subtract one before division and modulo.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
