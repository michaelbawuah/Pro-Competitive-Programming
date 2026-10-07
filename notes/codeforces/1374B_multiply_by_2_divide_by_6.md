# Multiply by 2, divide by 6

[Original problem](https://codeforces.com/problemset/problem/1374/B) · [C++ solution](../../solutions/codeforces/number_theory/1374B_multiply_by_2_divide_by_6.cpp)

## Try first

Only factors two and three can be removed.

## Reasoning

Only factors two and three can be removed. Each division by six removes one of each, so there must be at least as many threes as twos. Supply the missing twos by multiplication, then perform one division per three.

## Cost

- Time: **O(log n) per case**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Extra factors or more twos than threes make the transformation impossible.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
