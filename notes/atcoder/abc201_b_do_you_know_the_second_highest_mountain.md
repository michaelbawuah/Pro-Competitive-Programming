# Do you know the second highest mountain?

[Original problem](https://atcoder.jp/contests/abc201/tasks/abc201_b) · [C++ solution](../../solutions/atcoder/implementation/abc201_b_do_you_know_the_second_highest_mountain.cpp)

## Try first

Keep each name with its height, sort by decreasing height, and select the second entry.

## Reasoning

Keep each name with its height, sort by decreasing height, and select the second entry. Distinct heights remove tie ambiguity.

## Cost

- Time: **O(n log n+total name length)**.
- Extra space: **O(n+total name length)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
