# Job Assignment

[Original problem](https://atcoder.jp/contests/abc194/tasks/abc194_b) · [C++ solution](../../solutions/atcoder/implementation/abc194_b_job_assignment.cpp)

## Try first

Enumerate the employees assigned to both tasks.

## Reasoning

Enumerate the employees assigned to both tasks. One employee works sequentially, while two employees work in parallel and finish at the larger duration.

## Cost

- Time: **O(n^2)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
