# Balance

[Original problem](https://atcoder.jp/contests/abc129/tasks/abc129_b) · [C++ solution](../../solutions/atcoder/implementation/abc129_b_balance.cpp)

## Try first

Enumerate every nonempty prefix split.

## Reasoning

Enumerate every nonempty prefix split. The suffix sum is total minus prefix, so their difference is twice the prefix minus the total.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
