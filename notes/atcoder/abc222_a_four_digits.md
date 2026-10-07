# Four Digits

[Original problem](https://atcoder.jp/contests/abc222/tasks/abc222_a) · [C++ solution](../../solutions/atcoder/implementation/abc222_a_four_digits.cpp)

## Try first

Set a field width of four and fill missing leading positions with zeros.

## Reasoning

Set a field width of four and fill missing leading positions with zeros. Existing four-digit values need no padding.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

setw affects the next formatted field only, while setfill remains active. Set the width immediately before the numeric field that needs leading zeros.

## Watch for

Preserve required leading or trailing zeros; a numerically equal string may have the wrong format.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
