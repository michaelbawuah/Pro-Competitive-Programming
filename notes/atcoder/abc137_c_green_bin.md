# Green Bin

[Original problem](https://atcoder.jp/contests/abc137/tasks/abc137_c) · [C++ solution](../../solutions/atcoder/counting/abc137_c_green_bin.cpp)

## Try first

Sorting a word produces a canonical representation of its character multiset.

## Reasoning

Sorting a word produces a canonical representation of its character multiset. Its previous frequency counts precisely the earlier anagrams, so add that count before incrementing it.

## Cost

- Time: **O(n L(log L+log n))**.
- Extra space: **O(n L)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
