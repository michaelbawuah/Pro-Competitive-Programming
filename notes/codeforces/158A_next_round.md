# Next Round

[Original problem](https://codeforces.com/problemset/problem/158/A) · [C++ solution](../../solutions/codeforces/implementation/158A_next_round.cpp)

## Try first

Read the score at rank k, then apply both eligibility conditions.

## Reasoning

The input already gives scores in nonincreasing order. The kth score sets the threshold. A participant advances exactly when the score reaches that threshold and is positive, so count that predicate for every participant.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Convert the 1-based rank k to vector index k - 1.

## Watch for

When the kth score is zero, zero-score participants still do not advance.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
