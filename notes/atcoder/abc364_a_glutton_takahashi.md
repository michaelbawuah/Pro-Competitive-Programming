# Glutton Takahashi

[Original problem](https://atcoder.jp/contests/abc364/tasks/abc364_a) · [C++ solution](../../solutions/atcoder/implementation/abc364_a_glutton_takahashi.cpp)

## Try first

Two consecutive sweets prevent eating any later dish.

## Reasoning

Two consecutive sweets prevent eating any later dish. Reject such a pair only when a dish remains after it; becoming sick after the final dish does not prevent finishing.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
