# C++ field notes

## Compile deliberately

Use C++17, warnings, and the standard library first. `cp.py test` treats warnings as errors. `--sanitize` adds undefined-behavior checks and standard-library assertions with GCC. Sanitizers help reveal a bug; they do not prove its absence.

## Types follow constraints

An input may fit in `int` while its sum does not. Two hundred thousand values near a billion can sum to 200 trillion. Use `long long` for that sum and for intermediate products.

```cpp
long long total = 1LL * n * (n + 1) / 2;
```

The `1LL` changes the multiplication type before overflow can happen. Assigning an already-overflowed `int` result to `long long` is too late.

## Value, reference, and const reference

```cpp
for (auto& value : values) std::cin >> value; // mutate actual elements
for (const auto& edge : edges) { /* inspect without copying */ }
for (int value : values) { /* copy a small scalar */ }
```

Avoid references or iterators into a vector across `push_back`: reallocation can invalidate them. In the LIS solution, the iterator is used only when no append occurs.

## Pick a range convention

Use half-open ranges `[left, right)` internally: length is `right - left`, and an empty range has equal endpoints. A judge's inclusive, 1-based `[a,b]` becomes `[a-1,b)`. The reusable Fenwick and segment-tree interfaces share this convention.

## STL tools worth understanding

| Tool | Meaning | Common mistake |
| --- | --- | --- |
| `sort(begin,end)` | Orders a range | Comparator must use a strict order, not `<=` |
| `lower_bound` | First element >= target | Requires a sorted range |
| `upper_bound` | First element > target | Changes strict LIS into nondecreasing behavior |
| `unique` | Compacts consecutive duplicates | Does not erase vector elements |
| `map::find` | Looks up without inserting | `operator[]` inserts a missing key |
| `priority_queue` | Largest element first by default | Dijkstra needs a min-heap |
| `queue` | First-in, first-out | Pop after reading `front()` |
| `vector::back/pop_back` | Stack behavior | Empty access is invalid |

## Five patterns to explain aloud

1. **Two pointers:** both boundaries move forward, so the scan is linear after sorting.
2. **Binary search:** state exactly which endpoint is feasible and why the interval shrinks.
3. **DP:** define a state in one sentence before writing its transition.
4. **Graph traversal:** mark on discovery to avoid duplicate work; use iterative traversal for deep graphs.
5. **Data structures:** decide whether an update means assignment or addition before using a template.

## Common wrong answers

- Initialize maximum-subarray answers from data when the subarray must be nonempty.
- Use descending budgets for 0/1 knapsack and ascending sums for unlimited reuse.
- Query prefix-sum frequencies before inserting the current prefix.
- Reset KMP to the longest border after a match to preserve overlaps.
- Check graph connectivity before reporting a spanning-tree cost.

## Explain before optimizing

First write the simplest correct solution and estimate its work at the maximum input. Keep a brute-force version for small random tests when you replace it with a faster method. Measure correctness and complexity before introducing compiler-specific tricks.
