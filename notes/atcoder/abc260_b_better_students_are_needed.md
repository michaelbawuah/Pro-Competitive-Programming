# Better Students Are Needed!

[Original problem](https://atcoder.jp/contests/abc260/tasks/abc260_b) · [C++ solution](../../solutions/atcoder/implementation/abc260_b_better_students_are_needed.cpp)

## Try first

Perform admissions in the required three stages.

## Reasoning

Perform admissions in the required three stages. Sort by each stage score descending with original index ascending as the tie-break, skipping already selected examinees. Finally emit selected indices in increasing order.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Sorting changes element positions. Store an original index alongside each value when the answer refers to input positions, and make any tie-break explicit in the ordering.

## Watch for

Check repeated values and ties; a rank by occurrence differs from a rank by distinct value.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
