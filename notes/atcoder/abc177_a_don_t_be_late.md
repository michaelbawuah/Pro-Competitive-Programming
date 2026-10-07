# Don't be late

[Original problem](https://atcoder.jp/contests/abc177/tasks/abc177_a) · [C++ solution](../../solutions/atcoder/implementation/abc177_a_don_t_be_late.cpp)

## Try first

Distance reachable by the deadline is speed times time.

## Reasoning

Distance reachable by the deadline is speed times time. Equality still arrives on time.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
