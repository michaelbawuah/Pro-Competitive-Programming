# Round decimals

[Original problem](https://atcoder.jp/contests/abc226/tasks/abc226_a) · [C++ solution](../../solutions/atcoder/implementation/abc226_a_round_decimals.cpp)

## Try first

The first fractional digit determines round-half-up for a nonnegative decimal.

## Reasoning

The first fractional digit determines round-half-up for a nonnegative decimal. Parsing digits directly avoids binary floating-point rounding at halves.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

String find() returns a zero-based position or string::npos. Test the sentinel before adding one or converting the position to a signed output type.

## Watch for

Check the not-found case and whether the requested occurrence is the first or the last.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
