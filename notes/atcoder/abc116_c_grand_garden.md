# Grand Garden

[Original problem](https://atcoder.jp/contests/abc116/tasks/abc116_c) · [C++ solution](../../solutions/atcoder/greedy/abc116_c_grand_garden.cpp)

## Try first

At every rise, at least the height difference of new watering intervals must start.

## Reasoning

At every rise, at least the height difference of new watering intervals must start. Extend existing intervals across non-rising positions and start exactly those required intervals, meeting the lower bound.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
