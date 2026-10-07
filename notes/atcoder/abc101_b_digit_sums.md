# Digit Sums

[Original problem](https://atcoder.jp/contests/abc101/tasks/abc101_b) · [C++ solution](../../solutions/atcoder/implementation/abc101_b_digit_sums.cpp)

## Try first

Repeated remainder and division by ten extracts every digit.

## Reasoning

Repeated remainder and division by ten extracts every digit. Test whether their sum divides the original positive number.

## Cost

- Time: **O(log N)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
