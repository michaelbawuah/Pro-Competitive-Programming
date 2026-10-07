# Triple

[Original problem](https://codeforces.com/problemset/problem/1669/B) · [C++ solution](../../solutions/codeforces/counting/1669B_triple.cpp)

## Try first

Count occurrences of every value.

## Reasoning

Count occurrences of every value. Any value whose count reaches three is a valid answer; if no count reaches three, no triple exists.

## Cost

- Time: **O(n) per case**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Continue reading all values even after finding an answer so later test cases remain aligned.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
