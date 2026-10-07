# Ordinary Numbers

[Original problem](https://codeforces.com/problemset/problem/1520/B) · [C++ solution](../../solutions/codeforces/enumeration/1520B_ordinary_numbers.cpp)

## Try first

Generate repeated-digit numbers separately for each digit one through nine.

## Reasoning

Generate repeated-digit numbers separately for each digit one through nine. Each sequence is strictly increasing and the sequences are disjoint, so counting generated values not exceeding n counts every ordinary number once.

## Cost

- Time: **O(log n) per case**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Use a wide type for the next generated value beyond the input bound.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
