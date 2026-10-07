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

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
