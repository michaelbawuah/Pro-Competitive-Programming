# Can you buy them all?

[Original problem](https://atcoder.jp/contests/abc209/tasks/abc209_b) · [C++ solution](../../solutions/atcoder/implementation/abc209_b_can_you_buy_them_all.cpp)

## Try first

Apply the one-yen discount only to even one-based indices, sum the actual prices, and compare with the budget..

## Reasoning

Apply the one-yen discount only to even one-based indices, sum the actual prices, and compare with the budget.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
