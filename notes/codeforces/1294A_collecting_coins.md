# Collecting Coins

[Original problem](https://codeforces.com/problemset/problem/1294/A) · [C++ solution](../../solutions/codeforces/mathematics/1294A_collecting_coins.cpp)

## Try first

The final equal amount must be the total divided by three.

## Reasoning

The final equal amount must be the total divided by three. It is attainable exactly when the total is divisible by three and that target is at least every existing amount, since coins can only be added.

## Cost

- Time: **O(1) per case**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
