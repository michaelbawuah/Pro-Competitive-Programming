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

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
