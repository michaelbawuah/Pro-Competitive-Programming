# Overlapping sheets

[Original problem](https://atcoder.jp/contests/abc318/tasks/abc318_b) · [C++ solution](../../solutions/atcoder/implementation/abc318_b_overlapping_sheets.cpp)

## Try first

All boundaries have integer coordinates, so decompose the plane into unit squares.

## Reasoning

All boundaries have integer coordinates, so decompose the plane into unit squares. Mark every unit square covered by any sheet and count marked squares once; shared boundaries have zero area.

## Cost

- Time: **O(N*100^2)**.
- Extra space: **O(100^2)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
