# Piano 2

[Original problem](https://atcoder.jp/contests/abc355/tasks/abc355_b) · [C++ solution](../../solutions/atcoder/implementation/abc355_b_piano_2.cpp)

## Try first

Attach an origin flag to each value before sorting the combined sequence.

## Reasoning

Attach an origin flag to each value before sorting the combined sequence. A neighboring pair qualifies exactly when both origin flags indicate A.

## Cost

- Time: **O((N+M) log(N+M))**.
- Extra space: **O(N+M)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
