# Night at the Museum

[Original problem](https://codeforces.com/problemset/problem/731/A) · [C++ solution](../../solutions/codeforces/greedy/731A_night_at_the_museum.cpp)

## Try first

For each next letter, choose the shorter clockwise or counterclockwise distance on the 26-letter circle.

## Reasoning

For each next letter, choose the shorter clockwise or counterclockwise distance on the 26-letter circle. Every choice ends at the same required letter, so minimizing each independent transition minimizes the total.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
