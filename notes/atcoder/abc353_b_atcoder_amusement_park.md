# AtCoder Amusement Park

[Original problem](https://atcoder.jp/contests/abc353/tasks/abc353_b) · [C++ solution](../../solutions/atcoder/implementation/abc353_b_atcoder_amusement_park.cpp)

## Try first

Fill the current ride with whole groups in queue order.

## Reasoning

Fill the current ride with whole groups in queue order. Start a new ride whenever the next group would exceed capacity; the final nonempty ride also runs once.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
