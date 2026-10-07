# Dislike of Threes

[Original problem](https://codeforces.com/problemset/problem/1560/A) · [C++ solution](../../solutions/codeforces/enumeration/1560A_dislike_of_threes.cpp)

## Try first

Enumerate positive integers and retain those satisfying both exclusion rules.

## Reasoning

Enumerate positive integers and retain those satisfying both exclusion rules. This preserves increasing order, so the kth retained integer is the requested sequence element.

## Cost

- Time: **O(K + t), K = maximum supported rank**.
- Extra space: **O(K)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Both divisibility by three and a final digit three are forbidden.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
