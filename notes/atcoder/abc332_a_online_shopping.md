# Online Shopping

[Original problem](https://atcoder.jp/contests/abc332/tasks/abc332_a) · [C++ solution](../../solutions/atcoder/implementation/abc332_a_online_shopping.cpp)

## Try first

Sum unit price times quantity for every product.

## Reasoning

Sum unit price times quantity for every product. Add the shipping charge only when that merchandise subtotal is strictly below the free-shipping threshold.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
