# Christmas Eve

[Original problem](https://atcoder.jp/contests/abc115/tasks/abc115_c) · [C++ solution](../../solutions/atcoder/sorting/abc115_c_christmas_eve.cpp)

## Try first

Sort heights.

## Reasoning

Sort heights. If a chosen set skips a height between its endpoints, replacing an endpoint by that height cannot worsen its range; therefore some optimal set is a consecutive window.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::sort rearranges a vector in place. Retain original indices before sorting when the output must preserve input order; use long long when accumulating costs.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
