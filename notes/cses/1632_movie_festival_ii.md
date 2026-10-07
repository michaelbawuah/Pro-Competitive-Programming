# Movie Festival II

[Original problem](https://cses.fi/problemset/task/1632/) · [C++ solution](../../solutions/cses/greedy/1632_movie_festival_ii.cpp)

## Try first

Process movies by ending time to leave as much future availability as possible.

## Reasoning

Process movies by ending time to leave as much future availability as possible. Assign a feasible movie to the member whose previous movie ends latest without overlapping, preserving earlier availability for other starts.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

A multiset retains duplicate values. Erase an iterator to remove one occurrence; erase(value) removes every equal occurrence.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
