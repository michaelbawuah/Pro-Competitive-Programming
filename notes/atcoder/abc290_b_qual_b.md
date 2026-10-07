# Qual B

[Original problem](https://atcoder.jp/contests/abc290/tasks/abc290_b) · [C++ solution](../../solutions/atcoder/implementation/abc290_b_qual_b.cpp)

## Try first

Scan contestants in rank order.

## Reasoning

Scan contestants in rank order. Preserve the first K willing contestants and replace every later willing mark with x; unwilling contestants remain x.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
