# Contest Result

[Original problem](https://atcoder.jp/contests/abc290/tasks/abc290_a) · [C++ solution](../../solutions/atcoder/implementation/abc290_a_contest_result.cpp)

## Try first

Store each problem value and add the values indexed by the distinct solved problem numbers.

## Reasoning

Store each problem value and add the values indexed by the distinct solved problem numbers. Convert the one-based indices before access.

## Cost

- Time: **O(N+M)**.
- Extra space: **O(N)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
