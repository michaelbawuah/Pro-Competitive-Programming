# Monsters Battle Royale

[Original problem](https://atcoder.jp/contests/abc118/tasks/abc118_c) · [C++ solution](../../solutions/atcoder/number_theory/abc118_c_monsters_battle_royale.cpp)

## Try first

Every health remains a multiple of the initial gcd, giving a lower bound on a positive survivor.

## Reasoning

Every health remains a multiple of the initial gcd, giving a lower bound on a positive survivor. Repeatedly subtracting smaller health from larger health realizes the Euclidean algorithm and attains that gcd.

## Cost

- Time: **O(n log A)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
