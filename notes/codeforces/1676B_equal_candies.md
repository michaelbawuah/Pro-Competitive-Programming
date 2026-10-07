# Equal Candies

[Original problem](https://codeforces.com/problemset/problem/1676/B) · [C++ solution](../../solutions/codeforces/greedy/1676B_equal_candies.cpp)

## Try first

Removing candies cannot raise the smallest pile, so the final common size is at most the current minimum.

## Reasoning

Removing candies cannot raise the smallest pile, so the final common size is at most the current minimum. Keeping that minimum in every pile removes the fewest candies, namely total minus n times minimum.

## Cost

- Time: **O(n) per case**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
