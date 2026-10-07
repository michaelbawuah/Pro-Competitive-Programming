# Rally

[Original problem](https://atcoder.jp/contests/abc156/tasks/abc156_c) · [C++ solution](../../solutions/atcoder/implementation/abc156_c_rally.cpp)

## Try first

An optimal meeting point lies between the extreme coordinates, since moving toward that interval reduces every squared distance.

## Reasoning

An optimal meeting point lies between the extreme coordinates, since moving toward that interval reduces every squared distance. Enumerate the allowed coordinate range and minimize the total cost.

## Cost

- Time: **O(100 n)**.
- Extra space: **O(n)**.

## C++ takeaway

Initialize counters and container entries before scanning. A range-based loop with int& can read directly into a vector; a loop by value only copies each entry.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
