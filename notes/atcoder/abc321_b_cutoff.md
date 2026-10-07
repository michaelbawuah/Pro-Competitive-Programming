# Cutoff

[Original problem](https://atcoder.jp/contests/abc321/tasks/abc321_b) · [C++ solution](../../solutions/atcoder/implementation/abc321_b_cutoff.cpp)

## Try first

Try the final score from zero through one hundred.

## Reasoning

Try the final score from zero through one hundred. The resulting grade is total sum minus one minimum and one maximum, including duplicate extrema correctly. The first successful candidate is minimal.

## Cost

- Time: **O(n+101)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
