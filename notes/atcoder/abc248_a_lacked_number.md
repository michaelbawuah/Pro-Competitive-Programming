# Lacked Number

[Original problem](https://atcoder.jp/contests/abc248/tasks/abc248_a) · [C++ solution](../../solutions/atcoder/implementation/abc248_a_lacked_number.cpp)

## Try first

The ten digits sum to forty-five.

## Reasoning

The ten digits sum to forty-five. Each supplied digit occurs once, so subtracting their sum leaves the sole missing digit.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
