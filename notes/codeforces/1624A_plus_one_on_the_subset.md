# Plus One on the Subset

[Original problem](https://codeforces.com/problemset/problem/1624/A) · [C++ solution](../../solutions/codeforces/greedy/1624A_plus_one_on_the_subset.cpp)

## Try first

The smallest element needs at least maximum-minus-minimum increments, and one operation can increment it at most once.

## Reasoning

The smallest element needs at least maximum-minus-minimum increments, and one operation can increment it at most once. Increment every element still below the maximum on each round to achieve that lower bound.

## Cost

- Time: **O(n) per case**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
