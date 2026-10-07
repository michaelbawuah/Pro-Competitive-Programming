# Distinct Numbers

[Original problem](https://cses.fi/problemset/task/1621/) · [C++ solution](../../solutions/cses/sorting_searching/1621_distinct_numbers.cpp)

## Try first

Equal values become neighbors after sorting.

## Reasoning

Sorting groups every equal value into one contiguous run. unique compacts one representative from each run into the prefix, so the distance to its returned end is the number of different values.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::unique returns a logical end; it does not resize the vector. Use auto& when input must modify elements.

## Watch for

Do not print vector.size() after unique unless you also erase the suffix.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
