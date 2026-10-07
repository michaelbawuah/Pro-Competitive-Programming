# AtCoder Quiz 3

[Original problem](https://atcoder.jp/contests/abc230/tasks/abc230_a) · [C++ solution](../../solutions/atcoder/implementation/abc230_a_atcoder_quiz_3.cpp)

## Try first

Contest number 042 is skipped, so indices from 42 onward shift by one.

## Reasoning

Contest number 042 is skipped, so indices from 42 onward shift by one. Format the resulting number with exactly three decimal positions.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

setw affects the next formatted field only, while setfill remains active. Set the width immediately before the numeric field that needs leading zeros.

## Watch for

Preserve required leading or trailing zeros; a numerically equal string may have the wrong format.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
