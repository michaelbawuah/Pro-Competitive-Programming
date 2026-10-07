# Five Dishes

[Original problem](https://atcoder.jp/contests/abc123/tasks/abc123_b) · [C++ solution](../../solutions/atcoder/implementation/abc123_b_five_dishes.cpp)

## Try first

Round every serving duration up to the next ordering time.

## Reasoning

Round every serving duration up to the next ordering time. The final dish needs no trailing wait, so place the dish with largest rounding penalty last and subtract that penalty.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Initialize state before the scan and update it once per input element. Read a range-loop variable by reference when filling a container.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
