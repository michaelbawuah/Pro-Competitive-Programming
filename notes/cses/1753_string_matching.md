# String Matching

[Original problem](https://cses.fi/problemset/task/1753/) · [C++ solution](../../solutions/cses/strings/1753_string_matching.cpp)

## Try first

After a mismatch, preserve the longest useful suffix of what already matched.

## Reasoning

The prefix function records each prefix’s longest proper border. While scanning, matched is the longest pattern prefix equal to a suffix of the processed text. Following border links on mismatch skips only impossible alignments. After a complete match, retain its longest proper border so overlapping matches are counted.

## Cost

- Time: **O(n + m)**.
- Extra space: **O(m) beyond input**.

## C++ takeaway

Use integer lengths consistently. The original task guarantees a nonempty pattern.

## Watch for

Resetting matched to zero after a match would miss overlaps such as aaa in aaaaa.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
