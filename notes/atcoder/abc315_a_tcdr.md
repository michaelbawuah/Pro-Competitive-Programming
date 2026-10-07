# tcdr

[Original problem](https://atcoder.jp/contests/abc315/tasks/abc315_a) · [C++ solution](../../solutions/atcoder/implementation/abc315_a_tcdr.cpp)

## Try first

Filter out characters belonging to the five-vowel set and emit every remaining character in original order..

## Reasoning

Filter out characters belonging to the five-vowel set and emit every remaining character in original order.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
