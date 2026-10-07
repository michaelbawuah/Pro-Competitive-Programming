# Full House

[Original problem](https://atcoder.jp/contests/abc263/tasks/abc263_a) · [C++ solution](../../solutions/atcoder/implementation/abc263_a_full_house.cpp)

## Try first

After sorting, a full house consists of a block of two equal values followed by three equal values, or the reverse.

## Reasoning

After sorting, a full house consists of a block of two equal values followed by three equal values, or the reverse. Require the two block values to differ.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
