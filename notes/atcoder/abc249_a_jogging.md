# Jogging

[Original problem](https://atcoder.jp/contests/abc249/tasks/abc249_a) · [C++ solution](../../solutions/atcoder/implementation/abc249_a_jogging.cpp)

## Try first

Count full walk-rest cycles and the walking portion of the final partial cycle for each runner.

## Reasoning

Count full walk-rest cycles and the walking portion of the final partial cycle for each runner. Multiply active time by speed and compare the two distances.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
