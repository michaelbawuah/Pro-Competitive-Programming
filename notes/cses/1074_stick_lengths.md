# Stick Lengths

[Original problem](https://cses.fi/problemset/task/1074/) · [C++ solution](../../solutions/cses/sorting_searching/1074_stick_lengths.cpp)

## Try first

A median minimizes the sum of absolute distances.

## Reasoning

Moving the target toward a median decreases or preserves total cost: at least as many sticks get closer as get farther. Once a median is reached, moving either direction cannot improve the total. For an even count, any point between the two central lengths is optimal.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Subtract as long long before applying abs; accumulate the full cost in 64 bits.

## Watch for

The mean minimizes squared distances, not absolute distances.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
