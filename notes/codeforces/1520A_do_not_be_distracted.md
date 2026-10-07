# Do Not Be Distracted!

[Original problem](https://codeforces.com/problemset/problem/1520/A) · [C++ solution](../../solutions/codeforces/strings/1520A_do_not_be_distracted.cpp)

## Try first

Each task letter must occupy a single contiguous run.

## Reasoning

Each task letter must occupy a single contiguous run. Mark letters when their run starts; encountering an already marked letter at a later run proves that the student returned to a finished task.

## Cost

- Time: **O(n) per case**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
