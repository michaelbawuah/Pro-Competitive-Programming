# ASCII Art

[Original problem](https://atcoder.jp/contests/abc294/tasks/abc294_b) · [C++ solution](../../solutions/atcoder/implementation/abc294_b_ascii_art.cpp)

## Try first

Translate zero to a period and positive rank x to the uppercase letter at offset x-1.

## Reasoning

Translate zero to a period and positive rank x to the uppercase letter at offset x-1. Output a newline after each input row.

## Cost

- Time: **O(HW)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
