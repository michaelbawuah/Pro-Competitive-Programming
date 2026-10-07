# Half and Half

[Original problem](https://atcoder.jp/contests/abc095/tasks/arc096_a) · [C++ solution](../../solutions/atcoder/implementation/abc095_c_half_and_half.cpp)

## Try first

Enumerate the number of paired AB pizzas.

## Reasoning

Enumerate the number of paired AB pizzas. Once that count is fixed, buy exactly the remaining A and B demand; buying beyond the larger demand can never reduce cost.

## Cost

- Time: **O(max(X,Y))**.
- Extra space: **O(1)**.

## C++ takeaway

Use long long before multiplying or accumulating large quantities. Assigning an already-overflowed int expression to long long does not repair it.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
