# Playlist

[Original problem](https://cses.fi/problemset/task/1141/) · [C++ solution](../../solutions/cses/sorting_searching/1141_playlist.cpp)

## Try first

Move the left boundary beyond the previous occurrence of a repeated song.

## Reasoning

The window [left, right] contains no duplicates. Seeing a repeated song requires excluding its previous occurrence if that occurrence is still in the window. All other elements remain unique, so this is the longest valid window ending at right.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::map gives deterministic logarithmic lookups. find does not insert an absent key.

## Watch for

The left boundary must never move backward.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
