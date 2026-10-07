# ID

[Original problem](https://atcoder.jp/contests/abc113/tasks/abc113_c) · [C++ solution](../../solutions/atcoder/sorting/abc113_c_id.cpp)

## Try first

Sort by prefecture and establishment year to assign ranks within each prefecture.

## Reasoning

Sort by prefecture and establishment year to assign ranks within each prefecture. Store each result at its original index, then print both fields padded to six digits.

## Cost

- Time: **O(M log M)**.
- Extra space: **O(M)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
