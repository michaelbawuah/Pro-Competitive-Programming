# tcdr

[Original problem](https://atcoder.jp/contests/abc315/tasks/abc315_a) · [C++ solution](../../solutions/atcoder/implementation/abc315_a_tcdr.cpp)

## Try first

Filter out characters belonging to the five-vowel set and emit every remaining character in original order.

## Reasoning

Filter out characters belonging to the five-vowel set and emit every remaining character in original order.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

String find() returns a zero-based position or string::npos. Test the sentinel before adding one or converting the position to a signed output type.

## Watch for

Check the not-found case and whether the requested occurrence is the first or the last.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
