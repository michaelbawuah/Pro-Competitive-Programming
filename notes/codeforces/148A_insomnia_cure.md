# Insomnia cure

[Original problem](https://codeforces.com/problemset/problem/148/A) · [C++ solution](../../solutions/codeforces/enumeration/148A_insomnia_cure.cpp)

## Try first

Test whether each dragon index is divisible by at least one attack interval.

## Reasoning

Test whether each dragon index is divisible by at least one attack interval. A single logical OR counts overlapping attack conditions only once.

## Cost

- Time: **O(d)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Summing separate divisibility counts would count some dragons multiple times.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
