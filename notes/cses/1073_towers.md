# Towers

[Original problem](https://cses.fi/problemset/task/1073/) · [C++ solution](../../solutions/cses/sorting_searching/1073_towers.cpp)

## Try first

Put each cube on the smallest tower top that is strictly larger.

## Reasoning

For any fixed number of towers, smaller sorted top values are no more useful than larger ones. Replacing the smallest feasible top preserves the larger tops for future cubes. The standard exchange argument swaps the chosen feasible top with another choice without increasing the number of towers. The maintained tops stay sorted.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

upper_bound, rather than lower_bound, enforces a strictly larger supporting cube.

## Watch for

Equal-sized cubes cannot stack on one another.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
