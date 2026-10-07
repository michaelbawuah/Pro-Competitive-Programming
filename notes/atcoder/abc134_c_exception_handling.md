# Exception Handling

[Original problem](https://atcoder.jp/contests/abc134/tasks/abc134_c) · [C++ solution](../../solutions/atcoder/sorting/abc134_c_exception_handling.cpp)

## Try first

Keep the two largest values with multiplicity.

## Reasoning

Keep the two largest values with multiplicity. Removing a maximum leaves the second largest, while removing any smaller value leaves the maximum.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::sort rearranges a vector in place. Retain original indices before sorting when the output must preserve input order; use long long when accumulating costs.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
