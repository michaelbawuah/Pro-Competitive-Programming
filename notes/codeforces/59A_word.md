# Word

[Original problem](https://codeforces.com/problemset/problem/59/A) · [C++ solution](../../solutions/codeforces/strings/59A_word.cpp)

## Try first

Compare how many edits would be needed for an all-uppercase or all-lowercase word.

## Reasoning

Converting to lowercase changes exactly the uppercase letters; converting to uppercase changes exactly the lowercase letters. Choose the smaller edit count. When the counts tie, the statement requires lowercase, so uppercase is selected only for a strict uppercase majority.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

A range loop by reference edits characters in place; a value loop is enough when only counting.

## Watch for

A tie must become lowercase. Determine the target case before mutating the string.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
