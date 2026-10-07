# Piano

[Original problem](https://atcoder.jp/contests/abc346/tasks/abc346_b) · [C++ solution](../../solutions/atcoder/implementation/abc346_b_piano.cpp)

## Try first

Any candidate substring has length W+B and one of twelve starting phases in the periodic keyboard.

## Reasoning

Any candidate substring has length W+B and one of twelve starting phases in the periodic keyboard. Count whites for each phase; the remaining characters automatically give the black count.

## Cost

- Time: **O(12(W+B))**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
