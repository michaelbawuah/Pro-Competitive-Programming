# Wrong Subtraction

[Original problem](https://codeforces.com/problemset/problem/977/A) · [C++ solution](../../solutions/codeforces/implementation/977A_wrong_subtraction.cpp)

## Try first

Apply the stated rule to the current last digit at every step.

## Reasoning

The next value depends only on whether the current last digit is zero. Integer remainder detects that digit. Division by ten removes a trailing zero; otherwise subtracting one implements the other rule. Repeating this transition exactly k times reproduces the specified process.

## Cost

- Time: **O(k)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division by ten removes the last decimal digit of a nonnegative integer.

## Watch for

Recheck the last digit after each operation; subtracting one can create a trailing zero for the next step.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
