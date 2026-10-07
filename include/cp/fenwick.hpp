#pragma once
#include <cassert>
#include <vector>

namespace cp {
// Zero-based point updates, half-open queries. T must support +, -, and zero.
// O(log n) per operation; O(n) memory. Caller chooses T to avoid overflow.
template <class T>
class Fenwick {
    std::vector<T> tree_;
public:
    explicit Fenwick(int n) {
        assert(n >= 0);
        tree_.assign(static_cast<std::size_t>(n) + 1, T{});
    }
    int size() const { return static_cast<int>(tree_.size()) - 1; }
    void add(int index, T delta) {
        assert(index >= 0 && index < size());
        for (std::size_t i = static_cast<std::size_t>(index) + 1; i < tree_.size(); i += i & (~i + 1)) {
            tree_[i] += delta;
        }
    }
    T prefix(int end) const {
        assert(end >= 0 && end <= size());
        T total{};
        for (int i = end; i > 0; i -= i & -i) total += tree_[i];
        return total;
    }
    T sum(int left, int right) const {
        assert(left >= 0 && left <= right && right <= size());
        return prefix(right) - prefix(left);
    }
};
}  // namespace cp
