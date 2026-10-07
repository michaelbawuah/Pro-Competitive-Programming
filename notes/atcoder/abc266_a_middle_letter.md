# Middle  Letter

[Original problem](https://atcoder.jp/contests/abc266/tasks/abc266_a) · [C++ solution](../../solutions/atcoder/implementation/abc266_a_middle_letter.cpp)

## Try first

For odd length 2k+1, the middle character has zero-based index k.

## Reasoning

For odd length 2k+1, the middle character has zero-based index k. Integer division of the length by two gives this index.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
