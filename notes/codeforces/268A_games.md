# Games

[Original problem](https://codeforces.com/problemset/problem/268/A) · [C++ solution](../../solutions/codeforces/enumeration/268A_games.cpp)

## Try first

Enumerate every ordered host and visitor pair.

## Reasoning

Enumerate every ordered host and visitor pair. A kit conflict occurs precisely when the host home color equals the visitor away color; excluding equal indices avoids imaginary self-matches.

## Cost

- Time: **O(n^2)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
