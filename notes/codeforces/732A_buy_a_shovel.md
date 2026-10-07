# Buy a Shovel

[Original problem](https://codeforces.com/problemset/problem/732/A) · [C++ solution](../../solutions/codeforces/enumeration/732A_buy_a_shovel.cpp)

## Try first

Try increasing shovel counts until the total ends in zero or the available coin value.

## Reasoning

Try increasing shovel counts until the total ends in zero or the available coin value. Ten shovels always produce a multiple of ten, so checking counts one through ten is sufficient and gives the minimum.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
