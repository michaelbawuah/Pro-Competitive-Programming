# Same Differences

[Original problem](https://codeforces.com/problemset/problem/1520/D) · [C++ solution](../../solutions/codeforces/counting/1520D_same_differences.cpp)

## Try first

Rearrange the pair condition into a[i]-i = a[j]-j.

## Reasoning

Rearrange the pair condition into a[i]-i = a[j]-j. Count earlier equal keys while scanning; each valid pair is counted exactly when its later endpoint arrives.

## Cost

- Time: **O(n log n) per case**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

The number of pairs can exceed a 32-bit integer.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
