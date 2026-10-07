# Daydream

[Original problem](https://atcoder.jp/contests/abc049/tasks/arc065_a) · [C++ solution](../../solutions/atcoder/dynamic_programming/abc049_c_daydream.cpp)

## Try first

Let ok[i] mean the prefix ending before i can be formed.

## Reasoning

Let ok[i] mean the prefix ending before i can be formed. Append each matching allowed word from a reachable prefix; induction covers exactly the valid concatenations.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string indexing is zero-based. Use a size-compatible loop bound and ensure a complete substring fits before reading adjacent characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
