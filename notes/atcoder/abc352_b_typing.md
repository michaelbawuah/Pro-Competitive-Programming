# Typing

[Original problem](https://atcoder.jp/contests/abc352/tasks/abc352_b) · [C++ solution](../../solutions/atcoder/implementation/abc352_b_typing.cpp)

## Try first

Scan the typed string while tracking the next intended character.

## Reasoning

Scan the typed string while tracking the next intended character. Mistakes differ from that character, so its first occurrence must be the next correct keystroke; greedily matching all intended characters recovers the positions.

## Cost

- Time: **O(|S|+|T|)**.
- Extra space: **O(|S|+|T|)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
