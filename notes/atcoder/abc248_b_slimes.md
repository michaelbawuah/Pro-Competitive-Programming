# Slimes

[Original problem](https://atcoder.jp/contests/abc248/tasks/abc248_b) · [C++ solution](../../solutions/atcoder/implementation/abc248_b_slimes.cpp)

## Try first

Apply each multiplication until the first count reaches B.

## Reasoning

Apply each multiplication until the first count reaches B. Since K is at least two, counts strictly grow; the final product remains below 10^18 under the input bounds.

## Cost

- Time: **O(log_K(B/A)+1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
