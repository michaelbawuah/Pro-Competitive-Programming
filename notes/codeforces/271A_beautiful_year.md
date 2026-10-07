# Beautiful Year

[Original problem](https://codeforces.com/problemset/problem/271/A) · [C++ solution](../../solutions/codeforces/enumeration/271A_beautiful_year.cpp)

## Try first

Try years in increasing order, beginning strictly after the input.

## Reasoning

Try years in increasing order, beginning strictly after the input. Sorting a year digits makes duplicates adjacent, so the first candidate without adjacent duplicates is the required minimum.

## Cost

- Time: **O(gap)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Increment before testing because the answer must be a later year.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
