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

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
