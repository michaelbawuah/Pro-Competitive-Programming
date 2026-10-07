# Honest Coach

[Original problem](https://codeforces.com/problemset/problem/1360/B) · [C++ solution](../../solutions/codeforces/sorting/1360B_honest_coach.cpp)

## Try first

Sort strengths and split between adjacent values.

## Reasoning

Sort strengths and split between adjacent values. The objective becomes the boundary difference, whose smallest possible value is the minimum adjacent gap; nonadjacent differences cannot be smaller.

## Cost

- Time: **O(n log n) per case**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
