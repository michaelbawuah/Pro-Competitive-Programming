# Word Capitalization

[Original problem](https://codeforces.com/problemset/problem/281/A) · [C++ solution](../../solutions/codeforces/strings/281A_word_capitalization.cpp)

## Try first

Only the first character needs a case conversion.

## Reasoning

The requested capitalization changes the first letter to uppercase and preserves every later letter. Applying toupper to the first character performs exactly that operation; an already uppercase first character is unchanged. Reading and printing the complete word takes linear time.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Cast to unsigned char before calling toupper, then cast its integer return value back to char.

## Watch for

Do not lowercase the rest of the word. The input guarantees a nonempty word.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
