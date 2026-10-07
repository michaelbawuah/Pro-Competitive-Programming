# Weather Forecast

[Original problem](https://atcoder.jp/contests/abc218/tasks/abc218_a) · [C++ solution](../../solutions/atcoder/implementation/abc218_a_weather_forecast.cpp)

## Try first

The forecast for one-based day N is the character at index N-1.

## Reasoning

The forecast for one-based day N is the character at index N-1. Test its sunny marker.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
