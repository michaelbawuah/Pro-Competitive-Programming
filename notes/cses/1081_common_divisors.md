# Common Divisors

[Original problem](https://cses.fi/problemset/task/1081/) · [C++ solution](../../solutions/cses/mathematics/1081_common_divisors.cpp)

## Try first

A candidate divisor works if at least two input occurrences are multiples of it.

## Reasoning

Count frequencies, then test divisors from largest to smallest. Summing frequencies over multiples of d counts the occurrences divisible by d. If at least two exist, some pair has gcd at least d. The largest working divisor must equal the maximum pair gcd: any larger pair gcd would itself have been a working divisor considered earlier.

## Cost

- Time: **O(M log M + n), M = max input**.
- Extra space: **O(M + n)**.

## C++ takeaway

Frequency arrays preserve duplicate occurrences; replacing them with a set would change which pairs exist.

## Watch for

Two equal numbers can form the best pair. The selected numbers must be different occurrences, not necessarily different values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
