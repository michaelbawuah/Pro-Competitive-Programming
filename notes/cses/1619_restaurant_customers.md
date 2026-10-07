# Restaurant Customers

[Original problem](https://cses.fi/problemset/task/1619/) · [C++ solution](../../solutions/cses/sorting_searching/1619_restaurant_customers.cpp)

## Try first

Translate each visit into an arrival and a departure event.

## Reasoning

Between events, the number of customers cannot change. Processing events in time order maintains the exact active count, and its maximum is the answer. The task guarantees all arrival and departure times are distinct.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Sorting pairs orders first by time; the second field stores the count change.

## Watch for

Sum event changes rather than treating each visit independently.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
