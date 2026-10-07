# When?

[Original problem](https://atcoder.jp/contests/abc258/tasks/abc258_a) · [C++ solution](../../solutions/atcoder/implementation/abc258_a_when.cpp)

## Try first

Divide elapsed minutes into complete hours and the remaining minute field.

## Reasoning

Divide elapsed minutes into complete hours and the remaining minute field. Add hours to twenty-one and print minutes with two digits.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
