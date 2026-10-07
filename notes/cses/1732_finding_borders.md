# Finding Borders

[Original problem](https://cses.fi/problemset/task/1732/) · [C++ solution](../../solutions/cses/strings/1732_finding_borders.cpp)

## Try first

Once the longest border is known, find shorter borders inside that border.

## Reasoning

The prefix function stores the longest proper prefix that is also a suffix of each prefix. On a mismatch, its failure links enumerate the only shorter candidates. For the full string, every shorter border is also a border of the longest border, so repeatedly following those links lists exactly all border lengths. Reverse them to print increasing order. The matched length increases by at most one per character; total fallback work is linear.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Store lengths as signed integers to make length-1 accesses explicit and guarded by length>0.

## Watch for

The entire string is excluded because a border must be proper. A string with no border prints an empty line.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
