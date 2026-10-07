# Shortest Path with Obstacle

[Original problem](https://codeforces.com/problemset/problem/1547/A) · [C++ solution](../../solutions/codeforces/geometry/1547A_shortest_path_with_obstacle.cpp)

## Try first

Manhattan distance is attainable unless the endpoints and obstacle lie on one straight segment with the obstacle strictly between them.

## Reasoning

Manhattan distance is attainable unless the endpoints and obstacle lie on one straight segment with the obstacle strictly between them. Only that case forces a one-step detour off the line and one step back.

## Cost

- Time: **O(1) per case**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
