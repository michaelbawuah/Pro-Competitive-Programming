# Soft Drinking

[Original problem](https://codeforces.com/problemset/problem/151/A) · [C++ solution](../../solutions/codeforces/mathematics/151A_soft_drinking.cpp)

## Try first

Compute how many individual toasts each resource can support.

## Reasoning

Compute how many individual toasts each resource can support. The minimum is the resource bottleneck; dividing it equally among all friends gives the number of complete shared toasts.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Divide by the number of friends after finding the total resource bottleneck.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
