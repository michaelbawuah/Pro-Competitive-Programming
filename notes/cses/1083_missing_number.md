# Missing Number

[Original problem](https://cses.fi/problemset/task/1083/) · [C++ solution](../../solutions/cses/introductory/1083_missing_number.cpp)

## Try first

Compare the expected sum with the observed sum.

## Reasoning

Start with the sum of 1 through n. After reading each number, subtract it. The accumulator always equals the sum of all not-yet-read numbers; at the end only the missing number remains.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Promote before multiplication. Here n is already long long, so n * (n + 1) is evaluated in 64 bits.

## Watch for

The missing value can be at either end of the range.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
