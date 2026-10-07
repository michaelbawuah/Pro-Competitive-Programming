# YYMM or MMYY

[Original problem](https://atcoder.jp/contests/abc126/tasks/abc126_b) · [C++ solution](../../solutions/atcoder/implementation/abc126_b_yymm_or_mmyy.cpp)

## Try first

A two-digit field is a valid month exactly from 01 through 12.

## Reasoning

A two-digit field is a valid month exactly from 01 through 12. Test the first and last fields independently, then distinguish the four validity combinations.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
