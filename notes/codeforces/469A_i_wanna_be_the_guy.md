# I Wanna Be the Guy

[Original problem](https://codeforces.com/problemset/problem/469/A) · [C++ solution](../../solutions/codeforces/sets/469A_i_wanna_be_the_guy.cpp)

## Try first

Mark every level either player can pass.

## Reasoning

Mark every level either player can pass. The pair can complete the game exactly when the union contains all levels from one through n.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
