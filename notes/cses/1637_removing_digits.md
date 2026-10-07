# Removing Digits

[Original problem](https://cses.fi/problemset/task/1637/) · [C++ solution](../../solutions/cses/dynamic_programming/1637_removing_digits.cpp)

## Try first

For each number, try every nonzero digit as the first subtraction.

## Reasoning

Let best[v] be the minimum steps from v to zero. A legal first step subtracts a nonzero digit d of v, leaving the smaller state v-d. Taking the minimum of 1+best[v-d] covers every possible first move. Increasing v computes all dependencies first; best[0]=0 anchors the recurrence.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Extract decimal digits with remainder and integer division without allocating strings.

## Watch for

Subtracting zero makes no progress. The digits belong to the current value, not the original input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
