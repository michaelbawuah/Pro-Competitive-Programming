# Anti-Division

[Original problem](https://atcoder.jp/contests/abc131/tasks/abc131_c) · [C++ solution](../../solutions/atcoder/number_theory/abc131_c_anti_division.cpp)

## Try first

Inclusion-exclusion counts numbers divisible by C or D, with their overlap given by the lcm.

## Reasoning

Inclusion-exclusion counts numbers divisible by C or D, with their overlap given by the lcm. Subtract this count from the prefix length, then subtract prefixes to isolate [A,B].

## Cost

- Time: **O(log(min(C,D)))**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
