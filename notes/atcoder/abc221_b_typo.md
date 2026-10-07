# typo

[Original problem](https://atcoder.jp/contests/abc221/tasks/abc221_b) · [C++ solution](../../solutions/atcoder/implementation/abc221_b_typo.cpp)

## Try first

Try no swap and every allowed adjacent swap.

## Reasoning

Try no swap and every allowed adjacent swap. Restore the original after each trial so all trials use exactly one operation.

## Cost

- Time: **O(n^2)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
