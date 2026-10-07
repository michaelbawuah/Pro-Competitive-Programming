# Glass and Mug

[Original problem](https://atcoder.jp/contests/abc332/tasks/abc332_b) · [C++ solution](../../solutions/atcoder/implementation/abc332_b_glass_and_mug.cpp)

## Try first

Apply exactly one branch per operation in the stated priority order.

## Reasoning

Apply exactly one branch per operation in the stated priority order. A transfer is limited by both the remaining glass capacity and the water available in the mug.

## Cost

- Time: **O(K)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
