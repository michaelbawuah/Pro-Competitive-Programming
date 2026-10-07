# Holiday Of Equality

[Original problem](https://codeforces.com/problemset/problem/758/A) · [C++ solution](../../solutions/codeforces/greedy/758A_holiday_of_equality.cpp)

## Try first

Nobody can lose money, so the common final wealth must be at least the current maximum.

## Reasoning

Nobody can lose money, so the common final wealth must be at least the current maximum. Raising everyone exactly to that maximum meets the lower bound with the least total payment.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
