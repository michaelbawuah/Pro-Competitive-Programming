# Station and Bus

[Original problem](https://atcoder.jp/contests/abc158/tasks/abc158_a) · [C++ solution](../../solutions/atcoder/implementation/abc158_a_station_and_bus.cpp)

## Try first

A cross-company pair exists exactly when the three station labels are not all identical..

## Reasoning

A cross-company pair exists exactly when the three station labels are not all identical.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep input text as std::string when leading zeros or decimal digits matter. Convert one-based positions to zero-based indices before accessing characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
