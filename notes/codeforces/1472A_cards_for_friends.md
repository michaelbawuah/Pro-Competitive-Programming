# Cards for Friends

[Original problem](https://codeforces.com/problemset/problem/1472/A) · [C++ solution](../../solutions/codeforces/mathematics/1472A_cards_for_friends.cpp)

## Try first

Every factor two in either dimension permits one additional doubling of the number of pieces.

## Reasoning

Every factor two in either dimension permits one additional doubling of the number of pieces. After all such factors are removed both dimensions are odd and no further cut is legal, so this product is the maximum.

## Cost

- Time: **O(log w + log h) per case**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
