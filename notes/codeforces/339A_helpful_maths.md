# Helpful Maths

[Original problem](https://codeforces.com/problemset/problem/339/A) · [C++ solution](../../solutions/codeforces/strings/339A_helpful_maths.cpp)

## Try first

Separate the digits from the separators, sort, then rebuild the expression.

## Reasoning

Addition allows the terms to be reordered without changing their sum. Every term is one of the single-digit values 1, 2, and 3, so sorting their characters also sorts their numeric values. Printing those terms with one plus sign between adjacent terms produces the required expression.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Print the separator before every element except the first to avoid a trailing plus sign.

## Watch for

Do not sort the plus signs together with the digits. A one-term expression has no separators.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
