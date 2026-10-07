# Line Sensor

[Original problem](https://atcoder.jp/contests/abc274/tasks/abc274_b) · [C++ solution](../../solutions/atcoder/implementation/abc274_b_line_sensor.cpp)

## Try first

Each box contributes once to its own column.

## Reasoning

Each box contributes once to its own column. Process rows one at a time and accumulate a separate count for each column.

## Cost

- Time: **O(HW)**.
- Extra space: **O(W)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
