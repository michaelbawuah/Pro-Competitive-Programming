# Buy an Integer

[Original problem](https://atcoder.jp/contests/abc146/tasks/abc146_c) · [C++ solution](../../solutions/atcoder/binary_search/abc146_c_buy_an_integer.cpp)

## Try first

Price never decreases as the integer increases.

## Reasoning

Price never decreases as the integer increases. Maintain a feasible lower bound and an infeasible upper bound, halving the interval until the largest affordable integer is isolated.

## Cost

- Time: **O(log(10^9) log(10^9))**.
- Extra space: **O(log(10^9))**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
