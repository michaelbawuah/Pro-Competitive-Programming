# Count Distinct Integers

[Original problem](https://atcoder.jp/contests/abc240/tasks/abc240_b) · [C++ solution](../../solutions/atcoder/implementation/abc240_b_count_distinct_integers.cpp)

## Try first

Insert all values into a set, which stores each distinct integer once.

## Reasoning

Insert all values into a set, which stores each distinct integer once. Its final size is the number of different integers.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
