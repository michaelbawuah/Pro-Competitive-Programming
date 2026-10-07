// Road Construction | https://cses.fi/problemset/task/1676/
// Time: O(n + m alpha(n)); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

class DisjointSet {
    std::vector<int> parent_, size_;
public:
    explicit DisjointSet(int n) : parent_(n), size_(n, 1) {
        std::iota(parent_.begin(), parent_.end(), 0);
    }
    int find(int vertex) {
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
        return true;
    }
    int size(int vertex) { return size_[find(vertex)]; }
};

void solve() {
    int n, m;
    std::cin >> n >> m;
    DisjointSet components(n);
    int count = n, largest = 1;
    while (m-- > 0) {
        int a, b;
        std::cin >> a >> b;
        if (components.unite(a - 1, b - 1)) --count;
        largest = std::max(largest, components.size(a - 1));
        std::cout << count << ' ' << largest << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
