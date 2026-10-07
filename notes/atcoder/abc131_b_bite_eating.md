# Bite Eating

[Original problem](https://atcoder.jp/contests/abc131/tasks/abc131_b) · [C++ solution](../../solutions/atcoder/implementation/abc131_b_bite_eating.cpp)

## Try first

Removing one apple changes the total flavor by exactly that apple flavor.

## Reasoning

Removing one apple changes the total flavor by exactly that apple flavor. Remove the value with smallest absolute magnitude, including zero when present.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Initialize state before the scan and update it once per input element. Read a range-loop variable by reference when filling a container.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
