# CTZ

[Original problem](https://atcoder.jp/contests/abc336/tasks/abc336_b) · [C++ solution](../../solutions/atcoder/implementation/abc336_b_ctz.cpp)

## Try first

A trailing binary zero corresponds to a factor of two.

## Reasoning

A trailing binary zero corresponds to a factor of two. Repeatedly divide by two until the number becomes odd, counting the removed factors.

## Cost

- Time: **O(log N)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
