# Circle

[Original problem](https://atcoder.jp/contests/abc145/tasks/abc145_a) · [C++ solution](../../solutions/atcoder/implementation/abc145_a_circle.cpp)

## Try first

Circle area scales with the square of the radius; dividing the two areas cancels pi.

## Reasoning

Circle area scales with the square of the radius; dividing the two areas cancels pi.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
