# Dragons

[Original problem](https://codeforces.com/problemset/problem/230/A) · [C++ solution](../../solutions/codeforces/greedy/230A_dragons.cpp)

## Try first

Fight dragons in increasing strength order.

## Reasoning

Fight dragons in increasing strength order. Defeating an available weaker dragon cannot hurt because rewards are nonnegative. If the weakest remaining dragon is too strong, no remaining dragon can be defeated.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
