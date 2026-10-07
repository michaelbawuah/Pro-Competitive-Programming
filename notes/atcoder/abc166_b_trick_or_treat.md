# Trick or Treat

[Original problem](https://atcoder.jp/contests/abc166/tasks/abc166_b) · [C++ solution](../../solutions/atcoder/implementation/abc166_b_trick_or_treat.cpp)

## Try first

Mark the union of all snack-owner lists.

## Reasoning

Mark the union of all snack-owner lists. Snukes outside that union have no snacks and are counted once.

## Cost

- Time: **O(N+total owners)**.
- Extra space: **O(N)**.

## C++ takeaway

Initialize state before the scan and update it once per input element. Read a range-loop variable by reference when filling a container.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
