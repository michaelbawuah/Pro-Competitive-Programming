# Creating Strings

[Original problem](https://cses.fi/problemset/task/1622/) · [C++ solution](../../solutions/cses/introductory/1622_creating_strings.cpp)

## Try first

Start with the smallest arrangement and repeatedly request the next lexicographic permutation.

## Reasoning

next_permutation visits successive distinct arrangements in lexicographic order. Starting from the sorted string includes the first and stops after the last. Equal letters are handled without generating duplicate arrangements. Store outputs so the required count can be printed first.

## Cost

- Time: **O(n * k), k distinct permutations**.
- Extra space: **O(n * k)**.

## C++ takeaway

The do-while loop includes the initial permutation, even when the string has only one arrangement.

## Watch for

The judge explicitly requires alphabetical output order.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
