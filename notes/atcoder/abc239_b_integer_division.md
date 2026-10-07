# Integer Division

[Original problem](https://atcoder.jp/contests/abc239/tasks/abc239_b) · [C++ solution](../../solutions/atcoder/implementation/abc239_b_integer_division.cpp)

## Try first

C++ integer division truncates toward zero.

## Reasoning

C++ integer division truncates toward zero. For negative nonmultiples of ten, subtract one to obtain mathematical floor; exact multiples need no correction.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
