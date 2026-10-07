# Apartments

[Original problem](https://cses.fi/problemset/task/1084/) · [C++ solution](../../solutions/cses/sorting_searching/1084_apartments.cpp)

## Try first

Sort both sides and match the smallest remaining compatible pair.

## Reasoning

An apartment too small for the smallest remaining applicant cannot fit anyone later. If it is too large, that applicant cannot use any later apartment. When they fit, matching the two smallest compatible items preserves a maximum matching by exchanging partners if necessary.

## Cost

- Time: **O(n log n + m log m)**.
- Extra space: **O(n + m)**.

## C++ takeaway

Separate indices for the two vectors; their lengths need not match.

## Watch for

Tolerance endpoints are inclusive; one apartment cannot serve two applicants.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
