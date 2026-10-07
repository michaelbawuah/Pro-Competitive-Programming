# Not Too Hard

[Original problem](https://atcoder.jp/contests/abc328/tasks/abc328_a) · [C++ solution](../../solutions/atcoder/implementation/abc328_a_not_too_hard.cpp)

## Try first

Include every problem whose score is at most X and add its score to the running total.

## Reasoning

Include every problem whose score is at most X and add its score to the running total. The threshold is inclusive.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
