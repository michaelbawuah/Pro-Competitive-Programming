# Odd Grasshopper

[Original problem](https://codeforces.com/problemset/problem/1607/B) · [C++ solution](../../solutions/codeforces/mathematics/1607B_odd_grasshopper.cpp)

## Try first

Group the jumps into blocks of four: their signed displacements cancel and restore the original parity.

## Reasoning

Group the jumps into blocks of four: their signed displacements cancel and restore the original parity. Derive the remaining one, two, or three jumps from the initial parity, leaving only n modulo four to consider.

## Cost

- Time: **O(1) per case**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Negative odd values also satisfy x%2!=0; do not compare their remainder with positive one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
