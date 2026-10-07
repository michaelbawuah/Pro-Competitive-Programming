# Go to Jail

[Original problem](https://atcoder.jp/contests/abc179/tasks/abc179_b) · [C++ solution](../../solutions/atcoder/implementation/abc179_b_go_to_jail.cpp)

## Try first

Count the current consecutive doublet streak and remember whether it ever reaches three, even if a later roll breaks it..

## Reasoning

Count the current consecutive doublet streak and remember whether it ever reaches three, even if a later roll breaks it.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
