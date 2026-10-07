# Last Two Digits

[Original problem](https://atcoder.jp/contests/abc254/tasks/abc254_a) · [C++ solution](../../solutions/atcoder/implementation/abc254_a_last_two_digits.cpp)

## Try first

Taking the final two characters preserves both digits exactly, including a leading zero in the tens position.

## Reasoning

Taking the final two characters preserves both digits exactly, including a leading zero in the tens position.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

substr(start,length) uses a zero-based start and a character count, not an ending index. Omitting the length copies the suffix through the end.

## Watch for

Distinguish an inclusive endpoint from a substring length; check the shortest permitted input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
