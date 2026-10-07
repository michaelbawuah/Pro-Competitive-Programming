# A Reverse

[Original problem](https://atcoder.jp/contests/abc233/tasks/abc233_b) · [C++ solution](../../solutions/atcoder/implementation/abc233_b_a_reverse.cpp)

## Try first

The inclusive one-based interval [L,R] becomes the half-open zero-based iterator range [L-1,R).

## Reasoning

The inclusive one-based interval [L,R] becomes the half-open zero-based iterator range [L-1,R). Reverse exactly that range.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Standard algorithms use half-open ranges: the begin iterator is included and the end iterator is excluded. An inclusive one-based interval [L,R] becomes [begin+L-1,begin+R).

## Watch for

Convert both endpoints consistently; a one-element reversal must leave that element unchanged.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
