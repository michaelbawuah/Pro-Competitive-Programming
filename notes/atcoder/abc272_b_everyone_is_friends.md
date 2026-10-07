# Everyone is Friends

[Original problem](https://atcoder.jp/contests/abc272/tasks/abc272_b) · [C++ solution](../../solutions/atcoder/implementation/abc272_b_everyone_is_friends.cpp)

## Try first

Every party establishes meetings for all pairs of its attendees.

## Reasoning

Every party establishes meetings for all pairs of its attendees. Mark those pairs, then require every distinct person pair to be marked at least once.

## Cost

- Time: **O(sum(k_i^2)+N^2)**.
- Extra space: **O(N^2)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
