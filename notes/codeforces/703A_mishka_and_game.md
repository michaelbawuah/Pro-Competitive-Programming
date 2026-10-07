# Mishka and Game

[Original problem](https://codeforces.com/problemset/problem/703/A) · [C++ solution](../../solutions/codeforces/simulation/703A_mishka_and_game.cpp)

## Try first

Maintain the difference in round wins, adding one for a first-player win and subtracting one for a second-player win.

## Reasoning

Maintain the difference in round wins, adding one for a first-player win and subtracting one for a second-player win. Tied rounds leave it unchanged, so its final sign determines the match result.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
