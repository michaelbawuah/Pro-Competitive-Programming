# Trailing Zeros

[Original problem](https://cses.fi/problemset/task/1618/) · [C++ solution](../../solutions/cses/introductory/1618_trailing_zeros.cpp)

## Try first

Count factors of 5; factors of 2 are more plentiful.

## Reasoning

A trailing zero consumes a pair of factors 2 and 5. Multiples of 5 contribute one factor, multiples of 25 contribute another, and so on. Repeated division gives floor(n/5) + floor(n/25) + ... without computing a factorial.

## Cost

- Time: **O(log n)**.
- Extra space: **O(1)**.

## C++ takeaway

Repeated division avoids an ever-growing power-of-five variable.

## Watch for

Multiples of 25 contribute more than one zero.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
