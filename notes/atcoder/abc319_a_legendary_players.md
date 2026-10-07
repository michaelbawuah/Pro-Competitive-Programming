# Legendary Players

[Original problem](https://atcoder.jp/contests/abc319/tasks/abc319_a) · [C++ solution](../../solutions/atcoder/implementation/abc319_a_legendary_players.cpp)

## Try first

Use the fixed username-to-rating table supplied in the statement.

## Reasoning

Use the fixed username-to-rating table supplied in the statement. These are the contest snapshot values, so no current ranking lookup is involved.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
