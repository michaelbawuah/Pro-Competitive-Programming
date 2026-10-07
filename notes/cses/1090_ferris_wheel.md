# Ferris Wheel

[Original problem](https://cses.fi/problemset/task/1090/) · [C++ solution](../../solutions/cses/sorting_searching/1090_ferris_wheel.cpp)

## Try first

Place the heaviest remaining person; try the lightest as a partner.

## Reasoning

If the heaviest cannot share with the lightest, no possible partner fits, so a solo gondola is forced. If they fit, an optimal arrangement can pair them: exchange the lightest with the heaviest person’s previous partner, and any displaced lighter pair still fits.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Use signed indices when right can become -1.

## Watch for

A single remaining person consumes exactly one gondola.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
