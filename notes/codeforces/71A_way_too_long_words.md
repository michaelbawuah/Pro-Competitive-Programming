# Way Too Long Words

[Original problem](https://codeforces.com/problemset/problem/71/A) · [C++ solution](../../solutions/codeforces/implementation/71A_way_too_long_words.cpp)

## Try first

Keep the first and last characters and count only the interior.

## Reasoning

Only words longer than ten characters are abbreviated. Removing the two retained endpoints leaves length - 2 interior characters. Shorter words are copied unchanged.

## Cost

- Time: **O(total input length)**.
- Extra space: **O(longest word)**.

## C++ takeaway

string::front and back are safe because every input word is nonempty.

## Watch for

A word of exactly ten characters is unchanged.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
