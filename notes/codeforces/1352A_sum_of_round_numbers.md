# Sum of Round Numbers

[Original problem](https://codeforces.com/problemset/problem/1352/A) · [C++ solution](../../solutions/codeforces/mathematics/1352A_sum_of_round_numbers.cpp)

## Try first

Use one summand for each nonzero decimal digit at its original place value.

## Reasoning

Use one summand for each nonzero decimal digit at its original place value. Their sum reconstructs n; combining summands cannot create more nonzero positions than the number of summands, so this representation is minimal.

## Cost

- Time: **O(log n) per case**.
- Extra space: **O(log n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Zero digits produce no summand; the output order is unrestricted.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
