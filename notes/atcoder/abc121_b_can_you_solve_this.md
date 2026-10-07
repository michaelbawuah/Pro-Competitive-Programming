# Can you solve this?

[Original problem](https://atcoder.jp/contests/abc121/tasks/abc121_b) · [C++ solution](../../solutions/atcoder/implementation/abc121_b_can_you_solve_this.cpp)

## Try first

Evaluate each row dot product with B and add the bias C.

## Reasoning

Evaluate each row dot product with B and add the bias C. Count only strictly positive results, as zero does not meet the condition.

## Cost

- Time: **O(N M)**.
- Extra space: **O(M)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
