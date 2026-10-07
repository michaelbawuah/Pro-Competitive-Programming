# Towers

[Original problem](https://cses.fi/problemset/task/1073/) · [C++ solution](../../solutions/cses/sorting_searching/1073_towers.cpp)

## Try first

Put each cube on the smallest tower top that is strictly larger.

## Reasoning

Keep the tower tops sorted. A cube c can replace any top strictly greater than c. Choose the smallest such top t: if another construction instead replaces a larger top u, our choice leaves u available where theirs leaves t. Any later cube that fits on t also fits on u. Exchanging the future use of these two towers therefore preserves feasibility without adding a tower. Repeating this exchange makes an optimal construction agree with the greedy choices. If no top exceeds c, a new tower is necessary. Replacing the first top greater than c preserves the sorted order, enabling binary search.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

upper_bound, rather than lower_bound, enforces a strictly larger supporting cube.

## Watch for

Equal-sized cubes cannot stack on one another.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
