# Anton and Letters

[Original problem](https://codeforces.com/problemset/problem/443/A) · [C++ solution](../../solutions/codeforces/strings/443A_anton_and_letters.cpp)

## Try first

Ignore punctuation and spaces, marking only lowercase letters.

## Reasoning

Ignore punctuation and spaces, marking only lowercase letters. Counting marked alphabet positions gives the set size even when the textual input repeats a letter.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Use getline so embedded spaces do not truncate the input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
