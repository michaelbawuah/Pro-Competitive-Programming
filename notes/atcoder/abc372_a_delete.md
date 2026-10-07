# delete .

[Original problem](https://atcoder.jp/contests/abc372/tasks/abc372_a) · [C++ solution](../../solutions/atcoder/implementation/abc372_a_delete.cpp)

## Try first

Copy exactly the non-period characters in their original order.

## Reasoning

Copy exactly the non-period characters in their original order. If every character is a period, the resulting line is empty.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
