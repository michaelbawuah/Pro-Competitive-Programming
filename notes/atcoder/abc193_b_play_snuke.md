# Play Snuke

[Original problem](https://atcoder.jp/contests/abc193/tasks/abc193_b) · [C++ solution](../../solutions/atcoder/implementation/abc193_b_play_snuke.cpp)

## Try first

Exactly A consoles are sold before arrival at integer time A.

## Reasoning

Exactly A consoles are sold before arrival at integer time A. The shop has stock only if X>A; minimize price among those shops.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
