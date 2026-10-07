# A Unique Letter

[Original problem](https://atcoder.jp/contests/abc260/tasks/abc260_a) · [C++ solution](../../solutions/atcoder/implementation/abc260_a_a_unique_letter.cpp)

## Try first

Count occurrences of each candidate character and return the first with frequency one.

## Reasoning

Count occurrences of each candidate character and return the first with frequency one. If no such character exists, the required impossibility marker is valid.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
