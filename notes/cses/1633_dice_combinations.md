# Dice Combinations

[Original problem](https://cses.fi/problemset/task/1633/) · [C++ solution](../../solutions/cses/dynamic_programming/1633_dice_combinations.cpp)

## Try first

Classify a sequence by its last die roll.

## Reasoning

Every sequence totaling sum has a unique last face from 1 to 6. Removing it leaves a sequence totaling sum - face, so add those counts. ways[0] = 1 represents the single empty prefix that starts a new sequence.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Reduce after every addition; adding two residues remains below the int limit for this modulus.

## Watch for

Order matters: 1,2 and 2,1 are separate sequences.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
