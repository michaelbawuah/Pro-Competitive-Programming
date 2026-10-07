# Rally

[Original problem](https://atcoder.jp/contests/abc156/tasks/abc156_c) · [C++ solution](../../solutions/atcoder/implementation/abc156_c_rally.cpp)

## Try first

An optimal meeting point lies between the extreme coordinates, since moving toward that interval reduces every squared distance.

## Reasoning

An optimal meeting point lies between the extreme coordinates, since moving toward that interval reduces every squared distance. Enumerate the allowed coordinate range and minimize the total cost.

## Cost

- Time: **O(100 n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
