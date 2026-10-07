# Buttons

[Original problem](https://atcoder.jp/contests/abc124/tasks/abc124_a) · [C++ solution](../../solutions/atcoder/implementation/abc124_a_buttons.cpp)

## Try first

The two presses either use different buttons or repeat one of them.

## Reasoning

The two presses either use different buttons or repeat one of them. Evaluate all three possibilities after accounting for the decrease on a repeated press.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
