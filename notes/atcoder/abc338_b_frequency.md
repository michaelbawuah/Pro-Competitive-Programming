# Frequency

[Original problem](https://atcoder.jp/contests/abc338/tasks/abc338_b) · [C++ solution](../../solutions/atcoder/implementation/abc338_b_frequency.cpp)

## Try first

Count all letter frequencies, then scan letters in alphabetical order.

## Reasoning

Count all letter frequencies, then scan letters in alphabetical order. Replace the candidate only on a strictly larger frequency so the earliest letter wins ties.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
