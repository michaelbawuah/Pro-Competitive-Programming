#pragma once
#include <cassert>
#include <cstddef>
#include <utility>
#include <vector>

namespace cp {
// Merge must be associative with a two-sided identity; commutativity is not needed.
// Zero-based assignment; fold(left, right) covers [left, right).
template <class T, class Merge>
class SegmentTree {
    int size_;
    std::size_t base_ = 1;
    T identity_;
    Merge merge_;
    std::vector<T> tree_;
public:
    SegmentTree(int n, T identity, Merge merge)
        : size_(n), identity_(std::move(identity)), merge_(std::move(merge)) {
        assert(n >= 0);
        while (base_ < static_cast<std::size_t>(n)) base_ *= 2;
        tree_.assign(2 * base_, identity_);
    }
    void set(int index, const T& value) {
        assert(index >= 0 && index < size_);
        std::size_t node = base_ + static_cast<std::size_t>(index);
        tree_[node] = value;
        while (node > 1) {
            node /= 2;
            tree_[node] = merge_(tree_[2 * node], tree_[2 * node + 1]);
        }
    }
    T fold(int left, int right) const {
        assert(left >= 0 && left <= right && right <= size_);
        std::size_t l = base_ + static_cast<std::size_t>(left);
        std::size_t r = base_ + static_cast<std::size_t>(right);
        T before = identity_, after = identity_;
        while (l < r) {
            if (l & 1U) before = merge_(before, tree_[l++]);
            if (r & 1U) after = merge_(tree_[--r], after);
            l /= 2; r /= 2;
        }
        return merge_(before, after);
    }
};
}  // namespace cp
