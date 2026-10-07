# Five Transportations

[Original problem](https://atcoder.jp/contests/abc123/tasks/abc123_c) · [C++ solution](../../solutions/atcoder/implementation/abc123_c_five_transportations.cpp)

## Try first

The narrowest transport needs ceil(N/capacity) departure batches.

## Reasoning

The narrowest transport needs ceil(N/capacity) departure batches. Pipelining all stages adds the other four minutes of travel, attaining this bottleneck lower bound.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Use long long before multiplying or accumulating large quantities. Assigning an already-overflowed int expression to long long does not repair it.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
