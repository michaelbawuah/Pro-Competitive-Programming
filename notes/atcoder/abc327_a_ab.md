# ab

[Original problem](https://atcoder.jp/contests/abc327/tasks/abc327_a) · [C++ solution](../../solutions/atcoder/implementation/abc327_a_ab.cpp)

## Try first

Adjacent a and b can appear in exactly two orders, ab and ba.

## Reasoning

Adjacent a and b can appear in exactly two orders, ab and ba. Test for either contiguous two-character substring.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
