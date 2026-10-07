# All Distinct

[Original problem](https://codeforces.com/problemset/problem/1692/B) · [C++ solution](../../solutions/codeforces/greedy/1692B_all_distinct.cpp)

## Try first

At most one occurrence of each distinct value can remain.

## Reasoning

At most one occurrence of each distinct value can remain. Removing pairs preserves length parity, so keep all distinct values if that count has the original parity, or one fewer otherwise. Pair duplicate removals, sacrificing one unique value only when necessary.

## Cost

- Time: **O(n log n) per case**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
