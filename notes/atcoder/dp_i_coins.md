# Coins

[Original problem](https://atcoder.jp/contests/dp/tasks/dp_i) · [C++ solution](../../solutions/atcoder/dynamic_programming/dp_i_coins.cpp)

## Try first

Track a probability distribution over the number of heads after each toss.

## Reasoning

After a new coin, exactly h heads can arise from h previous heads followed by a tail, or h-1 previous heads followed by a head. Multiply each prior probability by the corresponding new outcome probability and add the disjoint events. Descending head counts preserve both previous-row values. The answer sums states with strictly more than half the coins showing heads.

## Cost

- Time: **O(n^2)**.
- Extra space: **O(n)**.

## C++ takeaway

Use double and print enough digits for the required absolute error; integer modular arithmetic does not apply to these probabilities.

## Watch for

An ascending in-place update would reuse the current coin. The checker rejects nonfinite output and applies the judge's 1e-9 absolute tolerance.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
