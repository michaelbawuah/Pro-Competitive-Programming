# Team

[Original problem](https://codeforces.com/problemset/problem/231/A) · [C++ solution](../../solutions/codeforces/implementation/231A_team.cpp)

## Try first

Convert the agreement rule into a threshold on three binary values.

## Reasoning

The sum of the three flags counts confident teammates. Exactly the rows with a sum of at least two satisfy the rule; the running counter counts such rows processed so far.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer arithmetic makes a three-input majority condition easy to inspect.

## Watch for

Three agreeing teammates still count as one solved problem.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
