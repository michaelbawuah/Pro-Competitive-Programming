# Fibonacci Numbers

[Original problem](https://cses.fi/problemset/task/1722/) · [C++ solution](../../solutions/cses/number_theory/1722_fibonacci_numbers.cpp)

## Try first

Return the adjacent pair (F_k,F_{k+1}).

## Reasoning

Return the adjacent pair (F_k,F_{k+1}). Fast-doubling identities compute F_{2k}=F_k(2F_{k+1}-F_k) and F_{2k+1}=F_k^2+F_{k+1}^2; one parity adjustment handles odd indices, halving the index at each recursion.

## Cost

- Time: **O(log n)**.
- Extra space: **O(log n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
