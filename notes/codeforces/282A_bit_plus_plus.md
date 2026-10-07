# Bit++

[Original problem](https://codeforces.com/problemset/problem/282/A) · [C++ solution](../../solutions/codeforces/implementation/282A_bit_plus_plus.cpp)

## Try first

Both spellings of an increment have the same middle character.

## Reasoning

Each instruction changes the variable by exactly one. The middle character is + for either increment spelling and - for either decrement spelling. Summing these changes from zero therefore reproduces the full program. Prefix versus postfix placement does not affect the final variable value.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Read each instruction as a string token; no expression parser is needed.

## Watch for

The starting value is zero. Both X++ and ++X are increments.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
