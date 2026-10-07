# Elections

[Original problem](https://codeforces.com/problemset/problem/1593/A) · [C++ solution](../../solutions/codeforces/mathematics/1593A_elections.cpp)

## Try first

Evaluate each candidate independently while keeping the others fixed.

## Reasoning

Evaluate each candidate independently while keeping the others fixed. To win outright their total must exceed the larger rival count by one; subtract their current count and clamp at zero.

## Cost

- Time: **O(1) per case**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

A tie is insufficient; each candidate needs a strict lead.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
