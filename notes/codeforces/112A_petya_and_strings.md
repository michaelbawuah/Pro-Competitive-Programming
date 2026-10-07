# Petya and Strings

[Original problem](https://codeforces.com/problemset/problem/112/A) · [C++ solution](../../solutions/codeforces/strings/112A_petya_and_strings.cpp)

## Try first

Normalize letter case before comparing the strings.

## Reasoning

Replacing every letter with its lowercase form preserves the intended case-insensitive alphabet order. Standard lexicographic comparison then looks at the first differing character, returning the required ordering. If every normalized character agrees, the answer is zero.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Pass unsigned char values to cctype functions; negative signed char values are outside their valid argument domain.

## Watch for

Output exactly -1, 0, or 1, rather than an arbitrary character-code difference.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
