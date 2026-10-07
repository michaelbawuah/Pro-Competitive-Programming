# Vasya the Hipster

[Original problem](https://codeforces.com/problemset/problem/581/A) · [C++ solution](../../solutions/codeforces/mathematics/581A_vasya_the_hipster.cpp)

## Try first

Each mixed-color day consumes one sock of each color, so the smaller count bounds and attains the maximum.

## Reasoning

Each mixed-color day consumes one sock of each color, so the smaller count bounds and attains the maximum. Afterwards only the surplus color remains, providing one same-color day per pair.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
