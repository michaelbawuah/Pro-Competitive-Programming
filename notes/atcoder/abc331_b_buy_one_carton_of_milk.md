# Buy One Carton of Milk

[Original problem](https://atcoder.jp/contests/abc331/tasks/abc331_b) · [C++ solution](../../solutions/atcoder/implementation/abc331_b_buy_one_carton_of_milk.cpp)

## Try first

Enumerate pack counts up to the number of that pack type alone needed to reach N.

## Reasoning

Enumerate pack counts up to the number of that pack type alone needed to reach N. Any larger count is unnecessary with positive prices. Among combinations meeting the egg target, minimize the total price.

## Cost

- Time: **O(N^3)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
