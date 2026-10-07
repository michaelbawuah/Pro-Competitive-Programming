# Tax Increase

[Original problem](https://atcoder.jp/contests/abc158/tasks/abc158_c) · [C++ solution](../../solutions/atcoder/implementation/abc158_c_tax_increase.cpp)

## Try first

The ten-percent tax bound limits the price to at most 1009.

## Reasoning

The ten-percent tax bound limits the price to at most 1009. Enumerate prices in ascending order and use integer division to implement both floor operations exactly.

## Cost

- Time: **O(1000)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
