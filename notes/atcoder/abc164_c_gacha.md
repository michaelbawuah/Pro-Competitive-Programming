# gacha

[Original problem](https://atcoder.jp/contests/abc164/tasks/abc164_c) · [C++ solution](../../solutions/atcoder/implementation/abc164_c_gacha.cpp)

## Try first

A set stores one representative of each item name regardless of repeated draws.

## Reasoning

A set stores one representative of each item name regardless of repeated draws. Its final size is the number of kinds obtained.

## Cost

- Time: **O(n L log n)**.
- Extra space: **O(n L)**.

## C++ takeaway

std::set keeps one ordered copy of each key. insert returns both an iterator and a Boolean indicating whether the key was new.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
