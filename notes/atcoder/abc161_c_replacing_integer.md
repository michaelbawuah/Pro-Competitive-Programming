# Replacing Integer

[Original problem](https://atcoder.jp/contests/abc161/tasks/abc161_c) · [C++ solution](../../solutions/atcoder/implementation/abc161_c_replacing_integer.cpp)

## Try first

Repeated subtraction reaches the remainder modulo K.

## Reasoning

Repeated subtraction reaches the remainder modulo K. Thereafter the operation alternates between that remainder and K minus it, so their minimum is the smallest reachable value.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Use long long before multiplying or accumulating large quantities. Assigning an already-overflowed int expression to long long does not repair it.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
