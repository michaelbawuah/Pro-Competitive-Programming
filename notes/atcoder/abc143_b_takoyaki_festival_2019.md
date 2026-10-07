# TAKOYAKI FESTIVAL 2019

[Original problem](https://atcoder.jp/contests/abc143/tasks/abc143_b) · [C++ solution](../../solutions/atcoder/implementation/abc143_b_takoyaki_festival_2019.cpp)

## Try first

When reading a value, pair it with every earlier value using their sum.

## Reasoning

When reading a value, pair it with every earlier value using their sum. Each unordered pair is counted exactly once.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
