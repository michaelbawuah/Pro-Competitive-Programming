# Same Integers

[Original problem](https://atcoder.jp/contests/abc093/tasks/arc094_a) · [C++ solution](../../solutions/atcoder/implementation/abc093_c_same_integers.cpp)

## Try first

Every operation adds two to the total.

## Reasoning

Every operation adds two to the total. Choose the smallest common target at least the maximum whose total deficit is even. Pair odd deficits, then fill remaining even deficits using increments of two.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
