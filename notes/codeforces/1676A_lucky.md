# Lucky?

[Original problem](https://codeforces.com/problemset/problem/1676/A) · [C++ solution](../../solutions/codeforces/strings/1676A_lucky.cpp)

## Try first

Compare the sums of the first and last three digits.

## Reasoning

Compare the sums of the first and last three digits. Subtracting corresponding character codes cancels their shared zero-digit offset, so their accumulated difference tests equality directly.

## Cost

- Time: **O(1) per case**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
