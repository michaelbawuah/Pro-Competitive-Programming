# Cypher

[Original problem](https://codeforces.com/problemset/problem/1703/C) · [C++ solution](../../solutions/codeforces/simulation/1703C_cypher.cpp)

## Try first

Apply each wheel movement modulo ten.

## Reasoning

Apply each wheel movement modulo ten. An upward movement decrements its displayed digit and a downward movement increments it; adding nine implements decrement without a negative remainder.

## Cost

- Time: **O(total moves) per case**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

The problem defines U as decreasing the displayed digit, so reversing those directions gives the wrong answer.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
