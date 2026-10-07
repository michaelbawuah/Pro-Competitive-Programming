# George and Accommodation

[Original problem](https://codeforces.com/problemset/problem/467/A) · [C++ solution](../../solutions/codeforces/counting/467A_george_and_accommodation.cpp)

## Try first

A room can accommodate both friends exactly when capacity minus occupancy is at least two.

## Reasoning

A room can accommodate both friends exactly when capacity minus occupancy is at least two. Count rooms satisfying this independent condition.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
