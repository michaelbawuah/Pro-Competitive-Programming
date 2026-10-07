# Soldier and Bananas

[Original problem](https://codeforces.com/problemset/problem/546/A) · [C++ solution](../../solutions/codeforces/mathematics/546A_soldier_and_bananas.cpp)

## Try first

The prices form a multiple of 1+2+...+w.

## Reasoning

Banana i costs i times the first price. Summing the arithmetic sequence gives first_price*w*(w+1)/2. Borrowing covers only the shortfall beyond the available money; when there is no shortfall, zero borrowing is sufficient.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Using long long for the inputs makes every intermediate multiplication wide before it is evaluated.

## Watch for

The input order is first price, available money, then banana count. Borrowing cannot be negative.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
