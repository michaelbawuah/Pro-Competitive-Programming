# Strictly Superior

[Original problem](https://atcoder.jp/contests/abc310/tasks/abc310_b) · [C++ solution](../../solutions/atcoder/implementation/abc310_b_strictly_superior.cpp)

## Try first

Compare every ordered product pair.

## Reasoning

Compare every ordered product pair. The candidate superior product must cover all functions at no greater price, with a strict improvement in price or in number of functions. Under containment, a larger count means an extra function.

## Cost

- Time: **O(N^2 M)**.
- Extra space: **O(NM)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
