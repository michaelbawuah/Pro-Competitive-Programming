# Some Sums

[Original problem](https://atcoder.jp/contests/abc083/tasks/abc083_b) · [C++ solution](../../solutions/atcoder/implementation/abc083_b_some_sums.cpp)

## Try first

Enumerate each candidate once, compute its decimal digit sum, and add the candidate when that sum lies in the inclusive interval..

## Reasoning

Enumerate each candidate once, compute its decimal digit sum, and add the candidate when that sum lies in the inclusive interval.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
