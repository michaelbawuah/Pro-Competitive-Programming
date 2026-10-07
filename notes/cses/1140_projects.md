# Projects

[Original problem](https://cses.fi/problemset/task/1140/) · [C++ solution](../../solutions/cses/dynamic_programming/1140_projects.cpp)

## Try first

Sort by finishing day. For each project, find the last prefix that finishes before it begins.

## Reasoning

Let best[i] be the best reward among the first i projects sorted by end day. An optimal choice either skips project i, retaining best[i], or includes it. In the latter case all earlier chosen projects must end strictly before its start. Binary search finds the size k of that compatible prefix, giving reward[i]+best[k]. These cases exhaust all optimal choices.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

lower_bound returns the first end day at least the start day; its offset is the number of strictly compatible projects.

## Watch for

Project end days are inclusive: ending on the next start day is a conflict. Total rewards need long long.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
