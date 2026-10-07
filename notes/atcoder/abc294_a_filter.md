# Filter

[Original problem](https://atcoder.jp/contests/abc294/tasks/abc294_a) · [C++ solution](../../solutions/atcoder/implementation/abc294_a_filter.cpp)

## Try first

Scan in original order and output exactly the values divisible by two.

## Reasoning

Scan in original order and output exactly the values divisible by two. Streaming the filter preserves relative order and duplicates.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
