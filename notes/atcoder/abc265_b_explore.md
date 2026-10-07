# Explore

[Original problem](https://atcoder.jp/contests/abc265/tasks/abc265_b) · [C++ solution](../../solutions/atcoder/implementation/abc265_b_explore.cpp)

## Try first

Move along the only possible route, paying each cost before collecting the destination bonus.

## Reasoning

Move along the only possible route, paying each cost before collecting the destination bonus. A zero or negative balance prevents arrival and cannot be rescued by that bonus.

## Cost

- Time: **O(N+M)**.
- Extra space: **O(N)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
