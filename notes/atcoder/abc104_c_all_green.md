# All Green

[Original problem](https://atcoder.jp/contests/abc104/tasks/abc104_c) · [C++ solution](../../solutions/atcoder/bitmasks/abc104_c_all_green.cpp)

## Try first

Enumerate which groups earn completion bonuses.

## Reasoning

Enumerate which groups earn completion bonuses. For a fixed set, take remaining problems in descending score order without completing another group. An exchange argument makes that fill optimal, and every possible completion set is visited.

## Cost

- Time: **O(D 2^D)**.
- Extra space: **O(D)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
