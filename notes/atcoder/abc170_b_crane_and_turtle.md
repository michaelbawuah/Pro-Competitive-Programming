# Crane and Turtle

[Original problem](https://atcoder.jp/contests/abc170/tasks/abc170_b) · [C++ solution](../../solutions/atcoder/implementation/abc170_b_crane_and_turtle.cpp)

## Try first

Start with all cranes, giving 2X legs.

## Reasoning

Start with all cranes, giving 2X legs. Each replacement by a turtle adds two; every even total from 2X to 4X is attainable.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
