# Ultra-Fast Mathematician

[Original problem](https://codeforces.com/problemset/problem/61/A) · [C++ solution](../../solutions/codeforces/strings/61A_ultra_fast_mathematician.cpp)

## Try first

Apply exclusive OR independently to corresponding bits.

## Reasoning

Apply exclusive OR independently to corresponding bits. Equal bits produce zero and different bits produce one; processing strings preserves leading zeroes in the answer.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
