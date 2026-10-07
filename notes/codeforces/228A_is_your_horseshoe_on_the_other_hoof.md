# Is your horseshoe on the other hoof?

[Original problem](https://codeforces.com/problemset/problem/228/A) · [C++ solution](../../solutions/codeforces/counting/228A_is_your_horseshoe_on_the_other_hoof.cpp)

## Try first

Keep one horseshoe of each existing color.

## Reasoning

Keep one horseshoe of each existing color. Every duplicate must be replaced, and choosing a new color for each replacement is sufficient, so the answer is four minus the number of distinct colors.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
