# Coin Piles

[Original problem](https://cses.fi/problemset/task/1754/) · [C++ solution](../../solutions/cses/introductory/1754_coin_piles.cpp)

## Try first

Solve for the number of moves of each type.

## Reasoning

If x moves remove (2,1) and y moves remove (1,2), then x=(2a-b)/3 and y=(2b-a)/3. Both are nonnegative integers exactly when the total is divisible by three and neither pile exceeds twice the other.

## Cost

- Time: **O(q)**.
- Extra space: **O(1)**.

## C++ takeaway

Use long long to keep doubled values and sums safe.

## Watch for

Empty piles are valid input; two empty piles require zero moves.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
