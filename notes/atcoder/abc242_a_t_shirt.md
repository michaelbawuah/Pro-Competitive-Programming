# T-shirt

[Original problem](https://atcoder.jp/contests/abc242/tasks/abc242_a) · [C++ solution](../../solutions/atcoder/implementation/abc242_a_t_shirt.cpp)

## Try first

Ranks through A always win, ranks above B never win, and each of the B-A middle ranks has the same inclusion probability C/(B-A)..

## Reasoning

Ranks through A always win, ranks above B never win, and each of the B-A middle ranks has the same inclusion probability C/(B-A).

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
