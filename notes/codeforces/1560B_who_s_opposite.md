# Who's Opposite?

[Original problem](https://codeforces.com/problemset/problem/1560/B) · [C++ solution](../../solutions/codeforces/mathematics/1560B_who_s_opposite.cpp)

## Try first

Opposite labels differ by half the circle size, so a and b determine that size uniquely.

## Reasoning

Opposite labels differ by half the circle size, so a and b determine that size uniquely. Reject labels outside it; otherwise shift c by half a circle and wrap into the one-based range.

## Cost

- Time: **O(1) per case**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
