# Gennady and a Card Game

[Original problem](https://codeforces.com/problemset/problem/1097/A) · [C++ solution](../../solutions/codeforces/strings/1097A_gennady_and_a_card_game.cpp)

## Try first

Check each card for a matching rank or a matching suit.

## Reasoning

Check each card for a matching rank or a matching suit. Any one match permits a move; no interactions between cards need to be considered.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
