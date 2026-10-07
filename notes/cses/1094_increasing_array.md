# Increasing Array

[Original problem](https://cses.fi/problemset/task/1094/) · [C++ solution](../../solutions/cses/introductory/1094_increasing_array.cpp)

## Try first

Fix each value as little as possible while preserving a valid prefix.

## Reasoning

Once a prefix is nondecreasing, the next value must be at least its last value. Raising it to exactly that threshold is mandatory and sufficient. Raising it further could only increase present or future cost.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Use long long for the total even when every input value fits in int.

## Watch for

Compare against the corrected previous value. The problem inputs are positive.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
