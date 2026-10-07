# Good Distance

[Original problem](https://atcoder.jp/contests/abc133/tasks/abc133_b) · [C++ solution](../../solutions/atcoder/implementation/abc133_b_good_distance.cpp)

## Try first

Compute squared distances with integers.

## Reasoning

Compute squared distances with integers. A distance is integral exactly when this sum is a perfect square; search an integer root to avoid floating equality checks.

## Cost

- Time: **O(N^2 (D+sqrt(D) X))**.
- Extra space: **O(N D)**.

## C++ takeaway

Initialize state before the scan and update it once per input element. Read a range-loop variable by reference when filling a container.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
