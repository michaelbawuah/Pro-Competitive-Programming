# Call the ID Number

[Original problem](https://atcoder.jp/contests/abc293/tasks/abc293_b) · [C++ solution](../../solutions/atcoder/implementation/abc293_b_call_the_id_number.cpp)

## Try first

Process people in the specified order, consulting whether they have been called at that moment.

## Reasoning

Process people in the specified order, consulting whether they have been called at that moment. Record every resulting call, then collect uncalled IDs in ascending order.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
