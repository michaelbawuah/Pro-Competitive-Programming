# Most Similar Words

[Original problem](https://codeforces.com/problemset/problem/1676/C) · [C++ solution](../../solutions/codeforces/enumeration/1676C_most_similar_words.cpp)

## Try first

Enumerate every unordered pair of words and sum per-position alphabet distances.

## Reasoning

Enumerate every unordered pair of words and sum per-position alphabet distances. Characters change independently, so those distances add; the smallest pair total is the optimum.

## Cost

- Time: **O(n^2 m) per case**.
- Extra space: **O(n m)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
