# YES or YES?

[Original problem](https://codeforces.com/problemset/problem/1703/A) · [C++ solution](../../solutions/codeforces/strings/1703A_yes_or_yes.cpp)

## Try first

Normalize all letters to uppercase before comparing with YES.

## Reasoning

Normalize all letters to uppercase before comparing with YES. This accepts precisely the case variations allowed by the statement.

## Cost

- Time: **O(1) per case**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
