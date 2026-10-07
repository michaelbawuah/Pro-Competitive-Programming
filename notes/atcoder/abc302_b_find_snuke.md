# Find snuke

[Original problem](https://atcoder.jp/contests/abc302/tasks/abc302_b) · [C++ solution](../../solutions/atcoder/implementation/abc302_b_find_snuke.cpp)

## Try first

A straight five-cell word is determined by its start and one of eight unit directions.

## Reasoning

A straight five-cell word is determined by its start and one of eight unit directions. Check all such paths with bounds checks, then output the unique matching path in letter order.

## Cost

- Time: **O(HW)**.
- Extra space: **O(HW)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
