# Most Unstable Array

[Original problem](https://codeforces.com/problemset/problem/1353/A) · [C++ solution](../../solutions/codeforces/mathematics/1353A_most_unstable_array.cpp)

## Try first

Each internal element contributes at most twice its value to adjacent absolute differences, while endpoints contribute once.

## Reasoning

Each internal element contributes at most twice its value to adjacent absolute differences, while endpoints contribute once. For three or more positions, placing the entire sum at one internal position attains 2m; handle lengths one and two separately.

## Cost

- Time: **O(1) per case**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
