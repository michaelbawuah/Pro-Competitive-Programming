# Job Interview

[Original problem](https://atcoder.jp/contests/abc298/tasks/abc298_a) · [C++ solution](../../solutions/atcoder/implementation/abc298_a_job_interview.cpp)

## Try first

Passing requires at least one good mark and no poor marks.

## Reasoning

Passing requires at least one good mark and no poor marks. Test these two presence conditions independently and combine them with logical AND.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
