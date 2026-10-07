# Prefix and Suffix

[Original problem](https://atcoder.jp/contests/abc322/tasks/abc322_b) · [C++ solution](../../solutions/atcoder/implementation/abc322_b_prefix_and_suffix.cpp)

## Try first

Compare the length-N prefix and suffix independently.

## Reasoning

Compare the length-N prefix and suffix independently. Map the two boolean results to the four output codes exactly as specified.

## Cost

- Time: **O(N+M)**.
- Extra space: **O(N+M)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
