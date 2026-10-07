# Subsegment Reverse

[Original problem](https://atcoder.jp/contests/abc356/tasks/abc356_a) · [C++ solution](../../solutions/atcoder/implementation/abc356_a_subsegment_reverse.cpp)

## Try first

Positions outside the reversed interval retain their values.

## Reasoning

Positions outside the reversed interval retain their values. Within it, position i receives the symmetric original value L+R-i.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
