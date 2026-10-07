# Algorithm library

These headers are independent teaching implementations. Judge solutions remain standalone.

| Header | Contract | Cost |
| --- | --- | --- |
| `dsu.hpp` | `unite`, `same`, component `size`, `components`; vertices `[0,n)` | Amortized O(α(n)) per union/find |
| `fenwick.hpp` | `add(index, delta)`, `prefix(end)`, `sum(left,right)`; ranges `[left,right)` | O(log n) per operation |
| `segment_tree.hpp` | Point `set`, range `fold`; associative merge and two-sided identity | O(log n) merges per operation |
| `kmp.hpp` | Prefix function; all match starts including overlaps; empty pattern matches every boundary | O(n + m) scan |

DSU, Fenwick, and segment tree use O(n) storage. KMP uses O(m + number of matches) extra storage. Segment-tree bounds assume a constant-time merge and bounded-size values; string concatenation tests verify ordering, not those cost assumptions.

```cpp
#include "include/cp/fenwick.hpp"
cp::Fenwick<long long> sums(5);
sums.add(2, 7);
auto value = sums.sum(1, 4); // 7; indices 1, 2, 3
```

Public index preconditions are checked with `assert`. Choose a value type large enough for every intermediate sum. Construction accepts an empty structure; empty range queries return the identity. Invalid input is a caller error.

```sh
python3 tools/cp.py test library
python3 tools/cp.py test library --sanitize
```
