# Adjacent Product

[Original problem](https://atcoder.jp/contests/abc346/tasks/abc346_a) · [C++ solution](../../solutions/atcoder/implementation/abc346_a_adjacent_product.cpp)

## Try first

Keep the previous element while reading the next one.

## Reasoning

Keep the previous element while reading the next one. Their product is the next requested adjacent product, after which the current element becomes the previous one.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
