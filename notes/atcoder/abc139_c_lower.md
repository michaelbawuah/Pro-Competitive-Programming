# Lower

[Original problem](https://atcoder.jp/contests/abc139/tasks/abc139_c) · [C++ solution](../../solutions/atcoder/implementation/abc139_c_lower.cpp)

## Try first

Track the number of consecutive non-increasing edges ending at the current square.

## Reasoning

Track the number of consecutive non-increasing edges ending at the current square. Reset after an increase and take the maximum; the answer counts moves rather than visited squares.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
