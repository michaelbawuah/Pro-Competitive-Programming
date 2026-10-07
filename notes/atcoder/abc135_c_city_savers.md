# City Savers

[Original problem](https://atcoder.jp/contests/abc135/tasks/abc135_c) · [C++ solution](../../solutions/atcoder/greedy/abc135_c_city_savers.cpp)

## Try first

Process heroes left to right and first defeat monsters in the left town, which no later hero can reach.

## Reasoning

Process heroes left to right and first defeat monsters in the left town, which no later hero can reach. Spend remaining power on the right town. Exchanging a right-town defeat for an available left-town defeat never reduces the optimum.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Use long long before multiplying or accumulating large quantities. Assigning an already-overflowed int expression to long long does not repair it.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
