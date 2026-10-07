# Reading Books

[Original problem](https://cses.fi/problemset/task/1631/) · [C++ solution](../../solutions/cses/sorting_searching/1631_reading_books.cpp)

## Try first

Compare the total reading time with twice the longest single book.

## Reasoning

Let S be the total duration and L the longest book. Each reader needs S time, and the longest book needs two nonoverlapping readings totaling 2L. Thus the answer is at least max(S,2L).

If L exceeds the sum of the other books, one reader handles the longest while the other handles all remaining books and waits if necessary; then they exchange roles. Both finish within 2L.

Otherwise, reader one reads the longest book first and then all other books in a fixed order. Reader two reads those other books in the same order and the longest last. The two readings of each other book start L time apart, at least that book's duration, so they cannot overlap. The longest book starts at time zero for reader one and S-L for reader two; S-L>=L prevents overlap there too. Both finish at S, attaining the lower bound.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Only the sum and maximum are needed; input can be processed as a stream.

## Watch for

The answer can exceed the sum when one book is longer than all others combined.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
