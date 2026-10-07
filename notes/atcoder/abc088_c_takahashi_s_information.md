# Takahashi's Information

[Original problem](https://atcoder.jp/contests/abc088/tasks/abc088_c) · [C++ solution](../../solutions/atcoder/implementation/abc088_c_takahashi_s_information.cpp)

## Try first

Subtracting the first entry of each row cancels its row contribution.

## Reasoning

Subtracting the first entry of each row cancels its row contribution. All resulting column differences must agree, and if they do, choosing row offsets from the first column constructs a valid decomposition.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
