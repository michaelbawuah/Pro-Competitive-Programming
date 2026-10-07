# Uppercase and Lowercase

[Original problem](https://atcoder.jp/contests/abc357/tasks/abc357_b) · [C++ solution](../../solutions/atcoder/implementation/abc357_b_uppercase_and_lowercase.cpp)

## Try first

Count uppercase letters before modifying the string.

## Reasoning

Count uppercase letters before modifying the string. The majority determines the target case; convert only characters of the other case while preserving alphabet positions.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
