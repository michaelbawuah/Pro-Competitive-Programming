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

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
