# Count Order

[Original problem](https://atcoder.jp/contests/abc150/tasks/abc150_c) · [C++ solution](../../solutions/atcoder/enumeration/abc150_c_count_order.cpp)

## Try first

Starting from sorted order, next_permutation visits every permutation in lexicographic order.

## Reasoning

Starting from sorted order, next_permutation visits every permutation in lexicographic order. Record the ranks of the two input permutations and take their difference.

## Cost

- Time: **O(n n!)**.
- Extra space: **O(n)**.

## C++ takeaway

Initialize counters and container entries before scanning. A range-based loop with int& can read directly into a vector; a loop by value only copies each entry.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
