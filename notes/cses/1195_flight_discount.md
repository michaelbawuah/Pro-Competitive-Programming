# Flight Discount

[Original problem](https://cses.fi/problemset/task/1195/) · [C++ solution](../../solutions/cses/graphs/1195_flight_discount.cpp)

## Try first

The same city has two states: coupon available and coupon already used.

## Reasoning

Replace each city with two states. Every flight keeps the coupon state and costs its normal price; an additional edge from unused to used costs floor(price/2). Paths ending in the used state correspond exactly to routes applying the coupon once. All expanded edge costs are nonnegative, so Dijkstra finds their shortest distances. Lazy deletion discards outdated heap entries.

## Cost

- Time: **O((n + m) log(n + m))**.
- Extra space: **O(n + m)**.

## C++ takeaway

A tuple priority queue orders by distance first, while structured bindings name all state fields.

## Watch for

Discounting the largest edge of the ordinary shortest route can miss a better route. Integer division correctly rounds odd prices down.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
