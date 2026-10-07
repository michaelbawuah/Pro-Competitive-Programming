# Attention

[Original problem](https://atcoder.jp/contests/abc098/tasks/arc098_a) · [C++ solution](../../solutions/atcoder/prefix_sums/abc098_c_attention.cpp)

## Try first

For a chosen leader, west-facing people on the left and east-facing people on the right must turn.

## Reasoning

For a chosen leader, west-facing people on the left and east-facing people on the right must turn. Maintain these two counts while scanning leaders, excluding the leader itself.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string indexing is zero-based. Use a size-compatible loop bound and ensure a complete substring fits before reading adjacent characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
