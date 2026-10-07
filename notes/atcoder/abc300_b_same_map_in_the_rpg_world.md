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

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
