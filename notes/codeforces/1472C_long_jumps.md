# Long Jumps

[Original problem](https://codeforces.com/problemset/problem/1472/C) · [C++ solution](../../solutions/codeforces/dynamic_programming/1472C_long_jumps.cpp)

## Try first

Every jump moves to a strictly larger index, so compute achievable scores from right to left.

## Reasoning

Every jump moves to a strictly larger index, so compute achievable scores from right to left. The score at i is its original value plus the already finalized score at its destination when that destination remains inside the array.

## Cost

- Time: **O(n) per case**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Determine the jump destination before overwriting the original array value.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
