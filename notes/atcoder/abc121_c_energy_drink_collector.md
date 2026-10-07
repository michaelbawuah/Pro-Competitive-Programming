# Energy Drink Collector

[Original problem](https://atcoder.jp/contests/abc121/tasks/abc121_c) · [C++ solution](../../solutions/atcoder/greedy/abc121_c_energy_drink_collector.cpp)

## Try first

Buying a more expensive can while a cheaper one remains can be improved by exchanging them.

## Reasoning

Buying a more expensive can while a cheaper one remains can be improved by exchanging them. Visit shops in price order and buy as much as needed and available.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
