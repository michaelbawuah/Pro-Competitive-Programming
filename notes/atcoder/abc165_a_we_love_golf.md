# We Love Golf

[Original problem](https://atcoder.jp/contests/abc165/tasks/abc165_a) · [C++ solution](../../solutions/atcoder/implementation/abc165_a_we_love_golf.cpp)

## Try first

Round A up to the first multiple of K.

## Reasoning

Round A up to the first multiple of K. A legal multiple exists exactly when that value does not exceed B.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
