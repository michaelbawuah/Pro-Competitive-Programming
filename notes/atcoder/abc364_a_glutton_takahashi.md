# Glutton Takahashi

[Original problem](https://atcoder.jp/contests/abc364/tasks/abc364_a) · [C++ solution](../../solutions/atcoder/implementation/abc364_a_glutton_takahashi.cpp)

## Try first

Two consecutive sweets prevent eating any later dish.

## Reasoning

Two consecutive sweets prevent eating any later dish. Reject such a pair only when a dish remains after it; becoming sick after the final dish does not prevent finishing.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
