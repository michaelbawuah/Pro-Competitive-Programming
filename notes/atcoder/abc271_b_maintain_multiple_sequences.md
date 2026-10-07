# Maintain Multiple Sequences

[Original problem](https://atcoder.jp/contests/abc271/tasks/abc271_b) · [C++ solution](../../solutions/atcoder/implementation/abc271_b_maintain_multiple_sequences.cpp)

## Try first

Store each variable-length sequence in its own vector.

## Reasoning

Store each variable-length sequence in its own vector. Convert both query indices from one-based to zero-based and access the requested element in constant time.

## Cost

- Time: **O(total length+Q)**.
- Extra space: **O(total length+N)**.

## C++ takeaway

A vector of vectors gives indexed rows with independently allocated storage. For simultaneous grid updates, read from the old grid and write into a separate result grid.

## Watch for

Check row and column dimensions separately and avoid reading an out-of-bounds neighbor.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
