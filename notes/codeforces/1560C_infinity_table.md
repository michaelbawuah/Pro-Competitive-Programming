# Infinity Table

[Original problem](https://codeforces.com/problemset/problem/1560/C) · [C++ solution](../../solutions/codeforces/mathematics/1560C_infinity_table.cpp)

## Try first

Square boundaries identify the layer containing n.

## Reasoning

Square boundaries identify the layer containing n. Subtract the preceding square to find its offset, then distinguish the downward column segment from the leftward row segment of that layer.

## Cost

- Time: **O(1) per case**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Check the squared integer root after the floating-point square-root estimate.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
