# Shift

[Original problem](https://atcoder.jp/contests/abc278/tasks/abc278_a) · [C++ solution](../../solutions/atcoder/implementation/abc278_a_shift.cpp)

## Try first

After K left shifts, output position i comes from original position i+K if it exists.

## Reasoning

After K left shifts, output position i comes from original position i+K if it exists. Otherwise it contains an appended zero, including when K exceeds N.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
