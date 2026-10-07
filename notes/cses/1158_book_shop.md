# Book Shop

[Original problem](https://cses.fi/problemset/task/1158/) · [C++ solution](../../solutions/cses/dynamic_programming/1158_book_shop.cpp)

## Try first

Each book is available once; protect the previous layer while updating in place.

## Reasoning

Before a book is considered, best[b] is the maximum pages within budget b using earlier books. Decreasing budgets ensure best[b - price] still belongs to the earlier layer. The transition either skips the book or buys it exactly once. x is the budget.

## Cost

- Time: **O(n * x)**.
- Extra space: **O(n + x)**.

## C++ takeaway

The signed descending loop is intentional. With unsigned indices, crossing zero can wrap.

## Watch for

Ascending budgets would incorrectly allow repeated purchases of one book.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
