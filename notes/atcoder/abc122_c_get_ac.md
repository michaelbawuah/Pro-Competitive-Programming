# GeT AC

[Original problem](https://atcoder.jp/contests/abc122/tasks/abc122_c) · [C++ solution](../../solutions/atcoder/prefix_sums/abc122_c_get_ac.cpp)

## Try first

Count AC occurrences by their ending position in a prefix sum.

## Reasoning

Count AC occurrences by their ending position in a prefix sum. For [l,r], subtract the prefix through l so an occurrence that begins outside the query is excluded.

## Cost

- Time: **O(n+q)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
