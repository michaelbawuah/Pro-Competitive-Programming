# Palace

[Original problem](https://atcoder.jp/contests/abc113/tasks/abc113_b) · [C++ solution](../../solutions/atcoder/implementation/abc113_b_palace.cpp)

## Try first

Multiply temperature differences by one thousand to avoid floating-point rounding.

## Reasoning

Multiply temperature differences by one thousand to avoid floating-point rounding. This positive scale preserves which proposed elevation minimizes the absolute difference.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
