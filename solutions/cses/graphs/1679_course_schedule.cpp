// Course Schedule | https://cses.fi/problemset/task/1679/
// Time: O(n + m); extra space: O(n + m).
#include <iostream>
#include <vector>
#include <queue>



void solve() {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<int>> graph(n);
    std::vector<int> indegree(n), order;
    for (int i = 0, a, b; i < m; ++i) {
        std::cin >> a >> b;
        graph[a - 1].push_back(b - 1);
        ++indegree[b - 1];
    }
    std::queue<int> ready;
    for (int i = 0; i < n; ++i) if (indegree[i] == 0) ready.push(i);
    while (!ready.empty()) {
        int u = ready.front(); ready.pop();
        order.push_back(u);
        for (int v : graph[u]) if (--indegree[v] == 0) ready.push(v);
    }
    if (static_cast<int>(order.size()) != n) { std::cout << "IMPOSSIBLE\n"; return; }
    for (int i = 0; i < n; ++i) std::cout << order[i] + 1 << (i + 1 == n ? '\n' : ' ');
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
