# Mix Juice

[Original problem](https://atcoder.jp/contests/abc171/tasks/abc171_b) · [C++ solution](../../solutions/atcoder/implementation/abc171_b_mix_juice.cpp)

## Try first

Replacing any selected expensive fruit by an unselected cheaper one cannot increase cost.

## Reasoning

Replacing any selected expensive fruit by an unselected cheaper one cannot increase cost. Thus select the K smallest prices.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
