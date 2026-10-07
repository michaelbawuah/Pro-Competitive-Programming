# Luntik and Subsequences

[Original problem](https://codeforces.com/problemset/problem/1582/B) · [C++ solution](../../solutions/codeforces/counting/1582B_luntik_and_subsequences.cpp)

## Try first

A subsequence totaling one less than the full sum omits elements totaling exactly one.

## Reasoning

A subsequence totaling one less than the full sum omits elements totaling exactly one. Omit one of the ones and any subset of the zeroes; all values above one must remain, giving ones times two to the zero count.

## Cost

- Time: **O(n) per case**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Use 64-bit arithmetic for the number of zero-subset choices.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
