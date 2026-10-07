# Find Takahashi

[Original problem](https://atcoder.jp/contests/abc275/tasks/abc275_a) · [C++ solution](../../solutions/atcoder/implementation/abc275_a_find_takahashi.cpp)

## Try first

Maintain the highest height seen together with its one-based bridge index.

## Reasoning

Maintain the highest height seen together with its one-based bridge index. Updating both when a larger height arrives preserves the maximum invariant.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
