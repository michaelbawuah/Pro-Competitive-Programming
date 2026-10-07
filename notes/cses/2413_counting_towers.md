# Counting Towers

[Original problem](https://cses.fi/problemset/task/2413/) · [C++ solution](../../solutions/cses/dynamic_programming/2413_counting_towers.cpp)

## Try first

Classify the top row by whether both columns belong to one block or separate blocks.

## Reasoning

Classify the top row by whether both columns belong to one block or separate blocks. Extending a joined state offers two joined and one split configurations; extending a split state offers one joined and four split configurations. Sum the two states after n rows.

## Cost

- Time: **O(max n+t)**.
- Extra space: **O(max n+t)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
