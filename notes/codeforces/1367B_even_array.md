# Even Array

[Original problem](https://codeforces.com/problemset/problem/1367/B) · [C++ solution](../../solutions/codeforces/greedy/1367B_even_array.cpp)

## Try first

A swap between an incorrect even-indexed position and an incorrect odd-indexed position fixes both.

## Reasoning

A swap between an incorrect even-indexed position and an incorrect odd-indexed position fixes both. The two mismatch counts must be equal; their common value is both a lower bound and an attainable swap count.

## Cost

- Time: **O(n) per case**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
