# Buildings

[Original problem](https://atcoder.jp/contests/abc353/tasks/abc353_a) · [C++ solution](../../solutions/atcoder/implementation/abc353_a_buildings.cpp)

## Try first

Compare every later building with the fixed first height.

## Reasoning

Compare every later building with the fixed first height. Store only the first strict improvement, retaining minus one when no such building exists.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
