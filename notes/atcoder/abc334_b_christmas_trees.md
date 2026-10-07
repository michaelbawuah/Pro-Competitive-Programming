# Christmas Trees

[Original problem](https://atcoder.jp/contests/abc334/tasks/abc334_b) · [C++ solution](../../solutions/atcoder/implementation/abc334_b_christmas_trees.cpp)

## Try first

Trees correspond to integers k with L-A <= kM <= R-A.

## Reasoning

Trees correspond to integers k with L-A <= kM <= R-A. Count them as floor((R-A)/M) minus floor((L-A-1)/M), correcting C++ division for negative nonmultiples. All shifted endpoints fit signed 64-bit arithmetic.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
