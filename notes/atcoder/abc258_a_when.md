# When?

[Original problem](https://atcoder.jp/contests/abc258/tasks/abc258_a) · [C++ solution](../../solutions/atcoder/implementation/abc258_a_when.cpp)

## Try first

Divide elapsed minutes into complete hours and the remaining minute field.

## Reasoning

Divide elapsed minutes into complete hours and the remaining minute field. Add hours to twenty-one and print minutes with two digits.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

setw affects the next formatted field only, while setfill remains active. Set the width immediately before the numeric field that needs leading zeros.

## Watch for

Preserve required leading or trailing zeros; a numerically equal string may have the wrong format.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
