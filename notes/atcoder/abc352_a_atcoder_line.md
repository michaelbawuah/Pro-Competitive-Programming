# AtCoder Line

[Original problem](https://atcoder.jp/contests/abc352/tasks/abc352_a) · [C++ solution](../../solutions/atcoder/implementation/abc352_a_atcoder_line.cpp)

## Try first

Both travel directions visit exactly the station numbers between X and Y.

## Reasoning

Both travel directions visit exactly the station numbers between X and Y. Since all three stations differ, Z is visited precisely when it lies strictly between the endpoints.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
