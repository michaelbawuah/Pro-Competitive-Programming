# Queue at the School

[Original problem](https://codeforces.com/problemset/problem/266/B) · [C++ solution](../../solutions/codeforces/simulation/266B_queue_at_the_school.cpp)

## Try first

Process disjoint BG pairs in each second.

## Reasoning

Process disjoint BG pairs in each second. After swapping a pair, skip its second position so the same boy cannot move twice during one simultaneous update.

## Cost

- Time: **O(n t)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Without skipping the swapped pair, one second can move a boy several places.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
