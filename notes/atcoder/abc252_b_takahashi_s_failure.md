# Takahashi's Failure

[Original problem](https://atcoder.jp/contests/abc252/tasks/abc252_b) · [C++ solution](../../solutions/atcoder/implementation/abc252_b_takahashi_s_failure.cpp)

## Try first

Only foods with maximum tastiness can be selected.

## Reasoning

Only foods with maximum tastiness can be selected. A disliked food has positive selection probability exactly when its tastiness equals that maximum.

## Cost

- Time: **O(N+K)**.
- Extra space: **O(N)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
