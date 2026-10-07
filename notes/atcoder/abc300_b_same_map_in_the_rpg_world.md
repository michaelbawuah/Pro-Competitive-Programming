# Same Map in the RPG World

[Original problem](https://atcoder.jp/contests/abc300/tasks/abc300_b) · [C++ solution](../../solutions/atcoder/implementation/abc300_b_same_map_in_the_rpg_world.cpp)

## Try first

Vertical and horizontal shifts commute and repeat after H and W steps respectively.

## Reasoning

Vertical and horizontal shifts commute and repeat after H and W steps respectively. Enumerate every offset pair modulo those dimensions and compare all resulting cells.

## Cost

- Time: **O(H^2 W^2)**.
- Extra space: **O(HW)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
