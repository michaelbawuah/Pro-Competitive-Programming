#pragma once
#include <algorithm>
#include <cassert>
#include <numeric>
#include <vector>

namespace cp {
// Vertices are [0, n). Amortized O(alpha(n)) find/unite; O(n) memory.
class DSU {
    std::vector<int> parent_, size_;
    int components_;
public:
    explicit DSU(int n) : components_(n) {
        assert(n >= 0);
        parent_.resize(n);
        size_.assign(n, 1);
        std::iota(parent_.begin(), parent_.end(), 0);
    }
    int find(int vertex) {
        assert(vertex >= 0 && vertex < static_cast<int>(parent_.size()));
        while (vertex != parent_[vertex]) {
            parent_[vertex] = parent_[parent_[vertex]];
            vertex = parent_[vertex];
        }
        return vertex;
    }
    bool unite(int a, int b) {
        a = find(a); b = find(b);
        if (a == b) return false;
        if (size_[a] < size_[b]) std::swap(a, b);
        parent_[b] = a;
        size_[a] += size_[b];
        --components_;
        return true;
    }
    bool same(int a, int b) { return find(a) == find(b); }
    int size(int vertex) { return size_[find(vertex)]; }
    int components() const { return components_; }
};
}  // namespace cp
