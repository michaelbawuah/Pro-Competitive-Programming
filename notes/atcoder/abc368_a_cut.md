# Cut

[Original problem](https://atcoder.jp/contests/abc368/tasks/abc368_a) · [C++ solution](../../solutions/atcoder/implementation/abc368_a_cut.cpp)

## Try first

The new top is the first of the original final K cards.

## Reasoning

The new top is the first of the original final K cards. Traverse cyclically from index N-K, preserving the order within both moved and remaining blocks.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
