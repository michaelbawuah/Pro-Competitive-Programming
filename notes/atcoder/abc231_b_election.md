# Election

[Original problem](https://atcoder.jp/contests/abc231/tasks/abc231_b) · [C++ solution](../../solutions/atcoder/implementation/abc231_b_election.cpp)

## Try first

Count every candidate name, then select the greatest frequency.

## Reasoning

Count every candidate name, then select the greatest frequency. The promised unique maximum removes any tie-breaking requirement.

## Cost

- Time: **O(n L log n)**.
- Extra space: **O(n L)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
