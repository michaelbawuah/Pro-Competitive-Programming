# GCD on Blackboard

[Original problem](https://atcoder.jp/contests/abc125/tasks/abc125_c) · [C++ solution](../../solutions/atcoder/prefix_sums/abc125_c_gcd_on_blackboard.cpp)

## Try first

After replacing one number, the final gcd cannot exceed the gcd of the untouched numbers.

## Reasoning

After replacing one number, the final gcd cannot exceed the gcd of the untouched numbers. Replacing it by that gcd attains the bound. Prefix and suffix gcds evaluate every exclusion efficiently.

## Cost

- Time: **O(n log A)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
