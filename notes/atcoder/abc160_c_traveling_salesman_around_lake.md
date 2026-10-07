# Traveling Salesman around Lake

[Original problem](https://atcoder.jp/contests/abc160/tasks/abc160_c) · [C++ solution](../../solutions/atcoder/greedy/abc160_c_traveling_salesman_around_lake.cpp)

## Try first

Starting just after a chosen gap allows visiting all houses without crossing that gap.

## Reasoning

Starting just after a chosen gap allows visiting all houses without crossing that gap. Any route visiting all houses must cover the complement of some gap, so skipping the largest gap is optimal.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
