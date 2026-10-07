# Array Division

[Original problem](https://cses.fi/problemset/task/1085/) · [C++ solution](../../solutions/cses/binary_search/1085_array_division.cpp)

## Try first

For a fixed sum cap, greedily extend each group as far as possible; no valid partition can end that group later, so this minimizes group count.

## Reasoning

For a fixed sum cap, greedily extend each group as far as possible; no valid partition can end that group later, so this minimizes group count. Feasibility is monotone in the cap, enabling binary search. A partition with fewer than k groups can be split further.

## Cost

- Time: **O(n log(sum A))**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
