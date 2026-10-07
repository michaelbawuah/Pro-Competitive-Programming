# Same

[Original problem](https://atcoder.jp/contests/abc324/tasks/abc324_a) · [C++ solution](../../solutions/atcoder/implementation/abc324_a_same.cpp)

## Try first

All values are equal exactly when each value equals the first one.

## Reasoning

All values are equal exactly when each value equals the first one. Use the first input as a fixed reference.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
