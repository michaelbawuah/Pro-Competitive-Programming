# Lucky Division

[Original problem](https://codeforces.com/problemset/problem/122/A) · [C++ solution](../../solutions/codeforces/enumeration/122A_lucky_division.cpp)

## Try first

Enumerate every lucky number no larger than the input limit.

## Reasoning

Enumerate every lucky number no larger than the input limit. The number is almost lucky exactly when one of these possible lucky divisors divides it.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

The divisor must be lucky; the input itself need not contain only lucky digits.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
