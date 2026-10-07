# Range Xor Queries

[Original problem](https://cses.fi/problemset/task/1650/) · [C++ solution](../../solutions/cses/range_queries/1650_range_xor_queries.cpp)

## Try first

XORing a value with itself cancels it.

## Reasoning

prefix[r] is the XOR of positions 1 through r. XOR it with prefix[l-1]: every value before l appears twice and cancels because x XOR x is zero. The remaining values are exactly the requested interval. Preprocessing all prefixes makes each query constant time.

## Cost

- Time: **O(n + q)**.
- Extra space: **O(n)**.

## C++ takeaway

The bitwise XOR operator is ^, not exponentiation. Parenthesize its expression when streaming output.

## Watch for

The input ranges are inclusive and one-based. Keep prefix[0]=0 for queries beginning at the first element.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
