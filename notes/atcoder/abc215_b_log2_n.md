# log2(N)

[Original problem](https://atcoder.jp/contests/abc215/tasks/abc215_b) · [C++ solution](../../solutions/atcoder/implementation/abc215_b_log2_n.cpp)

## Try first

Repeated halving counts how many powers of two fit below N.

## Reasoning

Repeated halving counts how many powers of two fit below N. It avoids floating logarithm errors at exact powers.

## Cost

- Time: **O(log N)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
