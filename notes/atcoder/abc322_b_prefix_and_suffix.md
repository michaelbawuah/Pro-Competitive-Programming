# Prefix and Suffix

[Original problem](https://atcoder.jp/contests/abc322/tasks/abc322_b) · [C++ solution](../../solutions/atcoder/implementation/abc322_b_prefix_and_suffix.cpp)

## Try first

Compare the length-N prefix and suffix independently.

## Reasoning

Compare the length-N prefix and suffix independently. Map the two boolean results to the four output codes exactly as specified.

## Cost

- Time: **O(N+M)**.
- Extra space: **O(N+M)**.

## C++ takeaway

substr(start,length) uses a zero-based start and a character count, not an ending index. Omitting the length copies the suffix through the end.

## Watch for

Distinguish an inclusive endpoint from a substring length; check the shortest permitted input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
