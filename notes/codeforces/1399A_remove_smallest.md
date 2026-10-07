# Remove Smallest

[Original problem](https://codeforces.com/problemset/problem/1399/A) · [C++ solution](../../solutions/codeforces/sorting/1399A_remove_smallest.cpp)

## Try first

Sort the values and inspect consecutive gaps.

## Reasoning

Sort the values and inspect consecutive gaps. A gap above one separates groups that can never interact; otherwise repeatedly removing the smallest value is legal until only one remains.

## Cost

- Time: **O(n log n) per case**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
