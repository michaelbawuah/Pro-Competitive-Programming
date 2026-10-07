# chukodai

[Original problem](https://atcoder.jp/contests/abc236/tasks/abc236_a) · [C++ solution](../../solutions/atcoder/implementation/abc236_a_chukodai.cpp)

## Try first

Convert both one-based positions to zero-based indices and swap those two characters.

## Reasoning

Convert both one-based positions to zero-based indices and swap those two characters. All other positions retain their values.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
