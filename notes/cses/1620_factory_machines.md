# Factory Machines

[Original problem](https://cses.fi/problemset/task/1620/) · [C++ solution](../../solutions/cses/sorting_searching/1620_factory_machines.cpp)

## Try first

Can a fixed amount of time produce at least the target?

## Reasoning

The number produced is nondecreasing in time. Binary search keeps the first feasible time inside [low, high]. The fastest machine alone provides a feasible upper bound. Return early once the target is met, so the production accumulator cannot overflow. Here k contains machine times and t is the target.

## Cost

- Time: **O(n log(min(k) * t))**.
- Extra space: **O(n)**.

## C++ takeaway

A capturing lambda expresses the feasibility check; low + (high - low) / 2 avoids adding endpoints.

## Watch for

The answer may be 10^18; summing production blindly can overflow even long long.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
