# Bear and Big Brother

[Original problem](https://codeforces.com/problemset/problem/791/A) · [C++ solution](../../solutions/codeforces/simulation/791A_bear_and_big_brother.cpp)

## Try first

Simulate complete years until the first weight becomes strictly larger.

## Reasoning

Simulate complete years until the first weight becomes strictly larger. Each iteration multiplies the two current weights by their growth factors; the first successful iteration is therefore minimal.

## Cost

- Time: **O(log(b/a) + 1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Equality does not satisfy strictly larger.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
