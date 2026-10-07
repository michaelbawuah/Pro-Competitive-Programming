# To Infinity

[Original problem](https://atcoder.jp/contests/abc106/tasks/abc106_c) · [C++ solution](../../solutions/atcoder/implementation/abc106_c_to_infinity.cpp)

## Try first

Leading ones never grow.

## Reasoning

Leading ones never grow. The first non-one expands beyond every allowed K, so the answer is one if K lies in that prefix and otherwise that first non-one digit.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Use long long before multiplying or accumulating large quantities. Assigning an already-overflowed int expression to long long does not repair it.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
