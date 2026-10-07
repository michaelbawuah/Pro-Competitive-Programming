# Reading Books

[Original problem](https://cses.fi/problemset/task/1631/) · [C++ solution](../../solutions/cses/sorting_searching/1631_reading_books.cpp)

## Try first

Compare the total reading time with twice the longest single book.

## Reasoning

Each reader needs total time, and the longest book must be read twice without overlap, so both are lower bounds. If the longest dominates, one reader handles it while the other handles all remaining books, then they exchange. Otherwise, circularly ordering the books and offsetting the readers by the longest duration fits both reads within total time without overlapping a book.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Only the sum and maximum are needed; input can be processed as a stream.

## Watch for

The answer can exceed the sum when one book is longer than all others combined.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
