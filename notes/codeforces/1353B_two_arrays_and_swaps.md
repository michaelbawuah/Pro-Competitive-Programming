# Two Arrays And Swaps

[Original problem](https://codeforces.com/problemset/problem/1353/B) · [C++ solution](../../solutions/codeforces/greedy/1353B_two_arrays_and_swaps.cpp)

## Try first

Replace the smallest available element of a with the largest available element of b whenever that increases the sum.

## Reasoning

Replace the smallest available element of a with the largest available element of b whenever that increases the sum. These choices give the largest remaining gain; stop once the gain becomes nonpositive or k swaps are used.

## Cost

- Time: **O(n log n) per case**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
