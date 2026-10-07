# I Scream

[Original problem](https://atcoder.jp/contests/abc194/tasks/abc194_a) · [C++ solution](../../solutions/atcoder/implementation/abc194_a_i_scream.cpp)

## Try first

Total milk solids include both supplied components.

## Reasoning

Total milk solids include both supplied components. Test categories in decreasing specificity so earlier categories take priority.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
