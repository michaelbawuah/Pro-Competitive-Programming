# LCS

[Original problem](https://atcoder.jp/contests/dp/tasks/dp_f) · [C++ solution](../../solutions/atcoder/dynamic_programming/dp_f_lcs.cpp)

## Try first

Compute optimal lengths for pairs of prefixes, then trace decisions backward.

## Reasoning

If the final characters of two prefixes match, an optimal common subsequence can use that match after an optimal subsequence of the shorter prefixes. If they differ, any common subsequence must omit at least one of those final characters; take the better of the two omissions. The resulting table gives optimal lengths. Backtracking follows a transition that preserves that optimum, collecting matched characters in reverse order.

## Cost

- Time: **O(n m)**.
- Extra space: **O(n m)**.

## C++ takeaway

Keep the full DP table when reconstruction needs earlier decisions, even if computing only the length would allow rolling rows.

## Watch for

A subsequence need not be contiguous. Several optimal answers may exist; the checker validates membership and maximum length rather than exact text.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
