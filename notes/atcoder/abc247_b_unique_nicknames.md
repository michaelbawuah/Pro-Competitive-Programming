# Unique Nicknames

[Original problem](https://atcoder.jp/contests/abc247/tasks/abc247_b) · [C++ solution](../../solutions/atcoder/implementation/abc247_b_unique_nicknames.cpp)

## Try first

For each person, test each candidate name against both names of every other person.

## Reasoning

For each person, test each candidate name against both names of every other person. They need at least one name absent from all others; these independent conditions are exactly the stated nickname rules.

## Cost

- Time: **O(n^2 L)**.
- Extra space: **O(n L)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
