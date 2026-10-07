# Marathon

[Original problem](https://codeforces.com/problemset/problem/1692/A) · [C++ solution](../../solutions/codeforces/counting/1692A_marathon.cpp)

## Try first

Compare each of the other three distances with the first runner distance.

## Reasoning

Compare each of the other three distances with the first runner distance. Counting strict improvements gives exactly the number of runners ahead.

## Cost

- Time: **O(1) per case**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
