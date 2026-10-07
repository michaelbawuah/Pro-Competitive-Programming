# Caesar Cipher

[Original problem](https://atcoder.jp/contests/abc232/tasks/abc232_b) · [C++ solution](../../solutions/atcoder/implementation/abc232_b_caesar_cipher.cpp)

## Try first

The first pair fixes the required shift modulo twenty-six.

## Reasoning

The first pair fixes the required shift modulo twenty-six. A uniform Caesar shift exists precisely when every other pair has that same modular difference.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
