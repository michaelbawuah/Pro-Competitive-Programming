# Hotel Queries

[Original problem](https://cses.fi/problemset/task/1143/) · [C++ solution](../../solutions/cses/segment_tree/1143_hotel_queries.cpp)

## Try first

Store maximum free capacity per segment.

## Reasoning

Store maximum free capacity per segment. If the root can accommodate a group, descend left whenever that half has enough rooms; otherwise descend right. This finds the first feasible hotel, then a point update restores ancestor maxima.

## Cost

- Time: **O(n+m log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
