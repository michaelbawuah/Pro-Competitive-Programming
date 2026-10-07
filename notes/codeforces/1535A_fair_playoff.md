# Fair Playoff

[Original problem](https://codeforces.com/problemset/problem/1535/A) · [C++ solution](../../solutions/codeforces/mathematics/1535A_fair_playoff.cpp)

## Try first

The winners are the maxima of the two semifinal pairs.

## Reasoning

The winners are the maxima of the two semifinal pairs. Both strongest players reach the final exactly when even the weaker winner is stronger than both semifinal losers.

## Cost

- Time: **O(1) per case**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
