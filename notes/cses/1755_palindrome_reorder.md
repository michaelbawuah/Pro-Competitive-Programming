# Palindrome Reorder

[Original problem](https://cses.fi/problemset/task/1755/) · [C++ solution](../../solutions/cses/introductory/1755_palindrome_reorder.cpp)

## Try first

All characters except possibly the center must occur in pairs.

## Reasoning

A palindrome uses matching character pairs around its center, so at most one character may have an odd count. Place half of each count on the left, the odd character in the middle if present, and mirror the left side. This uses the full multiset and is sufficient.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::array initializes the fixed alphabet counts; string::append repeats a character efficiently.

## Watch for

Input letters are uppercase. Multiple odd frequencies make the construction impossible.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
