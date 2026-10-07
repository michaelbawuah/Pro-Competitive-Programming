// Road Reparation | https://cses.fi/problemset/task/1675/
// Time: O(m log m + n); extra space: O(n + m).
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <tuple>

class DSU {
    std::vector<int> parent, size;
public:
    explicit DSU(int n) : parent(n), size(n, 1) { std::iota(parent.begin(), parent.end(), 0); }
    int find(int x) {
        while (x != parent[x]) { parent[x] = parent[parent[x]]; x = parent[x]; }
        return x;
    }
    bool unite(int a, int b) {
        a = find(a); b = find(b);
        if (a == b) return false;
        if (size[a] < size[b]) std::swap(a, b);
        parent[b] = a;
        size[a] += size[b];
        return true;
    }
};

void solve() {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::tuple<long long, int, int>> edges;
    for (int i = 0; i < m; ++i) {
        int a, b; long long cost;
        std::cin >> a >> b >> cost;
        edges.emplace_back(cost, a - 1, b - 1);
    }
    std::sort(edges.begin(), edges.end());
    DSU dsu(n);
    long long total = 0;
    int used = 0;
    for (auto [cost, a, b] : edges) {
        if (dsu.unite(a, b)) { total += cost; ++used; }
    }
    if (used == n - 1) std::cout << total << '\n';
    else std::cout << "IMPOSSIBLE\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
