# Alphabetical Strings

[Original problem](https://codeforces.com/problemset/problem/1547/B) · [C++ solution](../../solutions/codeforces/strings/1547B_alphabetical_strings.cpp)

## Try first

Start at the unique required a and grow the constructed interval.

## Reasoning

Start at the unique required a and grow the constructed interval. Each successive alphabet letter must lie immediately to its left or right, exactly reversing the permitted construction process.

## Cost

- Time: **O(n) per case**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
