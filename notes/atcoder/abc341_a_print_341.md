# Print 341

[Original problem](https://atcoder.jp/contests/abc341/tasks/abc341_a) · [C++ solution](../../solutions/atcoder/implementation/abc341_a_print_341.cpp)

## Try first

Start with one and append the pair 01 exactly N times.

## Reasoning

Start with one and append the pair 01 exactly N times. This preserves alternation and yields N zeros with N+1 ones.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
