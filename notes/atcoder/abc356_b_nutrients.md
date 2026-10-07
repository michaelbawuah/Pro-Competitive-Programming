# Nutrients

[Original problem](https://atcoder.jp/contests/abc356/tasks/abc356_b) · [C++ solution](../../solutions/atcoder/implementation/abc356_b_nutrients.cpp)

## Try first

Track the remaining requirement of every nutrient by subtracting each consumed amount.

## Reasoning

Track the remaining requirement of every nutrient by subtracting each consumed amount. All targets are met exactly when every remaining requirement is nonpositive.

## Cost

- Time: **O(NM)**.
- Extra space: **O(M)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
