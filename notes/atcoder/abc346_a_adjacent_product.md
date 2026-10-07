# Adjacent Product

[Original problem](https://atcoder.jp/contests/abc346/tasks/abc346_a) · [C++ solution](../../solutions/atcoder/implementation/abc346_a_adjacent_product.cpp)

## Try first

Keep the previous element while reading the next one.

## Reasoning

Keep the previous element while reading the next one. Their product is the next requested adjacent product, after which the current element becomes the previous one.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
