# Pangram

[Original problem](https://codeforces.com/problemset/problem/520/A) · [C++ solution](../../solutions/codeforces/strings/520A_pangram.cpp)

## Try first

Normalize each letter to lowercase and mark its alphabet position.

## Reasoning

Normalize each letter to lowercase and mark its alphabet position. The string is a pangram exactly when every one of the twenty-six flags is set.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Pass an unsigned char to cctype functions to avoid undefined behavior for negative char values.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
