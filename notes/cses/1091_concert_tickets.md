# Concert Tickets

[Original problem](https://cses.fi/problemset/task/1091/) · [C++ solution](../../solutions/cses/sorting_searching/1091_concert_tickets.cpp)

## Try first

Find the largest remaining price that does not exceed each budget.

## Reasoning

upper_bound points immediately after all affordable tickets. Its predecessor is the required maximum affordable price. Removing that exact iterator consumes one ticket while preserving other copies. If the iterator equals begin, no affordable ticket exists.

## Cost

- Time: **O((n + m) log n)**.
- Extra space: **O(n)**.

## C++ takeaway

multiset::erase(iterator) removes one copy; erase(value) would remove all equal prices.

## Watch for

Never decrement begin(), including when the multiset is empty.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
