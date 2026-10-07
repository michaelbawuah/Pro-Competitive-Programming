# Nearly Lucky Number

[Original problem](https://codeforces.com/problemset/problem/110/A) · [C++ solution](../../solutions/codeforces/strings/110A_nearly_lucky_number.cpp)

## Try first

Count occurrences of 4 and 7.

## Reasoning

Count occurrences of 4 and 7. There are at most nineteen digits, so the only possible lucky counts are four and seven; test those two counts.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

A lucky input number need not be nearly lucky.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
