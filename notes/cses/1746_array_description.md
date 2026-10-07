# Array Description

[Original problem](https://cses.fi/problemset/task/1746/) · [C++ solution](../../solutions/cses/dynamic_programming/1746_array_description.cpp)

## Try first

Track how many valid prefixes end at each possible value.

## Reasoning

A prefix ending in v can extend only prefixes ending in v-1, v, or v+1. Sum those three counts, rejecting v when the description fixes a different value. For the first position each allowed value contributes one prefix. Induction on prefix length proves the recurrence; the answer sums all possible final values.

## Cost

- Time: **O(n m)**.
- Extra space: **O(m)**.

## C++ takeaway

Two zero-padded vectors avoid special indexing branches at values 1 and m. Promote to long long before adding three residues.

## Watch for

Clear the next row every iteration so forbidden values cannot retain old counts.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
