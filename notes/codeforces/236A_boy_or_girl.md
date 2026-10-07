# Boy or Girl

[Original problem](https://codeforces.com/problemset/problem/236/A) · [C++ solution](../../solutions/codeforces/strings/236A_boy_or_girl.cpp)

## Try first

Count distinct letters, then apply the parity rule specified by the problem.

## Reasoning

Count distinct letters, then apply the parity rule specified by the problem. Sorting groups identical letters, so unique leaves exactly one representative per group.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

The rule depends on distinct letters, not the original string length.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
