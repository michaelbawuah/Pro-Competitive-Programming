# The Middle Day

[Original problem](https://atcoder.jp/contests/abc315/tasks/abc315_b) · [C++ solution](../../solutions/atcoder/implementation/abc315_b_the_middle_day.cpp)

## Try first

The middle day has one-based annual index (total+1)/2.

## Reasoning

The middle day has one-based annual index (total+1)/2. Subtract whole months until that index lies within the current month, leaving its one-based day number.

## Cost

- Time: **O(M)**.
- Extra space: **O(M)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
