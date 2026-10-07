# Candies

[Original problem](https://atcoder.jp/contests/abc087/tasks/arc090_a) · [C++ solution](../../solutions/atcoder/prefix_sums/abc087_c_candies.cpp)

## Try first

Every path moves down exactly once.

## Reasoning

Every path moves down exactly once. At each possible turning column, combine the upper-row prefix through that column and the lower-row suffix starting there.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
