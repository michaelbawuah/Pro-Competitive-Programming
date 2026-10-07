# Changing a Character

[Original problem](https://atcoder.jp/contests/abc126/tasks/abc126_a) · [C++ solution](../../solutions/atcoder/implementation/abc126_a_changing_a_character.cpp)

## Try first

Translate the one-based position to a zero-based index and lowercase only that character.

## Reasoning

Translate the one-based position to a zero-based index and lowercase only that character. Passing unsigned char to tolower avoids signed-character pitfalls.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep input text as std::string when leading zeros or decimal digits matter. Convert one-based positions to zero-based indices before accessing characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
