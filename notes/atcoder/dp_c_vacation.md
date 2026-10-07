# Vacation

[Original problem](https://atcoder.jp/contests/dp/tasks/dp_c) · [C++ solution](../../solutions/atcoder/educational_dp/dp_c_vacation.cpp)

## Try first

Remember yesterday’s activity, because it determines today’s legal choices.

## Reasoning

best[a] is the best total ending with activity a on the previous day. To end today with a, extend the better of the two other states and add today’s reward. Keeping separate next values prevents transitions from accidentally using today’s results.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

std::array expresses a fixed-size three-state DP without heap allocation.

## Watch for

Choosing the largest reward independently each day can violate the repetition constraint.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
