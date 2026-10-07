# Foods Loved by Everyone

[Original problem](https://atcoder.jp/contests/abc118/tasks/abc118_b) · [C++ solution](../../solutions/atcoder/implementation/abc118_b_foods_loved_by_everyone.cpp)

## Try first

Each person lists a food at most once.

## Reasoning

Each person lists a food at most once. A food is liked by everyone exactly when its total occurrence count equals the number of people.

## Cost

- Time: **O(N M)**.
- Extra space: **O(M)**.

## C++ takeaway

Initialize state before the scan and update it once per input element. Read a range-loop variable by reference when filling a container.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
