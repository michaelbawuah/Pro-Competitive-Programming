# FizzBuzz Sum

[Original problem](https://atcoder.jp/contests/abc162/tasks/abc162_b) · [C++ solution](../../solutions/atcoder/implementation/abc162_b_fizzbuzz_sum.cpp)

## Try first

Only indices divisible by neither three nor five remain numeric in FizzBuzz.

## Reasoning

Only indices divisible by neither three nor five remain numeric in FizzBuzz. Add exactly those indices using a wide total.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
