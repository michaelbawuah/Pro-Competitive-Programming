# Default Price

[Original problem](https://atcoder.jp/contests/abc308/tasks/abc308_b) · [C++ solution](../../solutions/atcoder/implementation/abc308_b_default_price.cpp)

## Try first

Associate each named special color with its price.

## Reasoning

Associate each named special color with its price. For every eaten plate, use that price if present and the default price otherwise; repeated plates are counted separately.

## Cost

- Time: **O((N+M)L log M)**.
- Extra space: **O((N+M)L)**.

## C++ takeaway

A map associates each key with a value. operator[] inserts an absent key, while find() checks membership without insertion and at() requires the key to exist.

## Watch for

Distinguish a missing key from a stored zero, and count repeated inputs when multiplicity matters.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
