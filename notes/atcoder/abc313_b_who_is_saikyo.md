# Who is Saikyo?

[Original problem](https://atcoder.jp/contests/abc313/tasks/abc313_b) · [C++ solution](../../solutions/atcoder/implementation/abc313_b_who_is_saikyo.cpp)

## Try first

The information forms a DAG because it is consistent with a strict total order.

## Reasoning

The information forms a DAG because it is consistent with a strict total order. Any vertex with incoming evidence cannot be strongest. If there is one source, tracing predecessors from every vertex leads to it, so it is uniquely strongest; multiple sources permit multiple possible strongest people.

## Cost

- Time: **O(N+M)**.
- Extra space: **O(N)**.

## C++ takeaway

vector<bool> stores packed flags and returns a proxy on indexed access. Assign flags through indexing instead of trying to bind a bool& to an element.

## Watch for

Initialize every flag and preserve the distinction between a zero-based position and a one-based label.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
