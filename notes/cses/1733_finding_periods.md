# Finding Periods

[Original problem](https://cses.fi/problemset/task/1733/) · [C++ solution](../../solutions/cses/strings/1733_finding_periods.cpp)

## Try first

A period p works exactly when the suffix beginning at p matches the prefix for all remaining characters.

## Reasoning

The Z value at p measures how many characters of the suffix at p match the beginning. Thus p is a period exactly when Z[p]=n-p: each character equals the one p positions earlier, which recursively makes the whole string a repetition of the first p characters. A final partial repetition is allowed. The Z algorithm reuses matches inside its rightmost known matching interval; comparisons extending that interval are linear in total.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Use a half-open [left,right) matching interval so its remaining length is right-i.

## Watch for

Do not require the period to divide the string length. The full length is always a period.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
