# Square String?

[Original problem](https://codeforces.com/problemset/problem/1619/A) · [C++ solution](../../solutions/codeforces/strings/1619A_square_string.cpp)

## Try first

A doubled string must have even length and two identical halves.

## Reasoning

A doubled string must have even length and two identical halves. Those conditions are also sufficient: the first half itself is the required repeated string.

## Cost

- Time: **O(n) per case**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
