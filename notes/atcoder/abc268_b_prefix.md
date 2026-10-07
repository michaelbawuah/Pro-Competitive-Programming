# Prefix?

[Original problem](https://atcoder.jp/contests/abc268/tasks/abc268_b) · [C++ solution](../../solutions/atcoder/implementation/abc268_b_prefix.cpp)

## Try first

A prefix must fit within the target length and equal its initial segment.

## Reasoning

A prefix must fit within the target length and equal its initial segment. Compare exactly the source-length initial segment.

## Cost

- Time: **O(|S|+|T|)**.
- Extra space: **O(|S|+|T|)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
