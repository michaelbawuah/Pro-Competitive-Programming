# I_love_%username%

[Original problem](https://codeforces.com/problemset/problem/155/A) · [C++ solution](../../solutions/codeforces/arrays/155A_i_love_username.cpp)

## Try first

Maintain the minimum and maximum of earlier scores.

## Reasoning

Maintain the minimum and maximum of earlier scores. A new performance is amazing exactly when it falls strictly outside that interval; update the interval only after testing.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

The first performance and equal record scores are not new records.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
