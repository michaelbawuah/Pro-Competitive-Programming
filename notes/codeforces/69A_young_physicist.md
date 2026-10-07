# Young Physicist

[Original problem](https://codeforces.com/problemset/problem/69/A) · [C++ solution](../../solutions/codeforces/mathematics/69A_young_physicist.cpp)

## Try first

Add force vectors component by component.

## Reasoning

Add force vectors component by component. The net vector is zero exactly when all three accumulated components are zero, which is the specified equilibrium condition.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
