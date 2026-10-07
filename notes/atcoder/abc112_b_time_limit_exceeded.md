# Time Limit Exceeded

[Original problem](https://atcoder.jp/contests/abc112/tasks/abc112_b) · [C++ solution](../../solutions/atcoder/implementation/abc112_b_time_limit_exceeded.cpp)

## Try first

Filter routes by the inclusive time limit and retain the cheapest feasible cost.

## Reasoning

Filter routes by the inclusive time limit and retain the cheapest feasible cost. A sentinel beyond every allowed cost identifies the no-route case.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
