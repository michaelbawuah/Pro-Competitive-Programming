# Presents

[Original problem](https://codeforces.com/problemset/problem/136/A) · [C++ solution](../../solutions/codeforces/arrays/136A_presents.cpp)

## Try first

Invert the permutation of gift recipients.

## Reasoning

Invert the permutation of gift recipients. When person i gives to p[i], store i at answer[p[i]]; reading that inverse array reports the giver for every recipient.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
