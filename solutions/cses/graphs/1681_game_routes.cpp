// Game Routes | https://cses.fi/problemset/task/1681/
// Time: O(n + m); extra space: O(n + m).
#include <iostream>
#include <queue>
#include <vector>



void solve() {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<int>> graph(n);
    std::vector<int> indegree(n), ways(n);
    for (int i = 0; i < m; ++i) {
        int a, b;
        std::cin >> a >> b;
        graph[a - 1].push_back(b - 1);
        ++indegree[b - 1];
    }
    std::queue<int> ready;
    for (int i = 0; i < n; ++i) if (indegree[i] == 0) ready.push(i);
    constexpr int mod = 1000000007;
    ways[0] = 1;
    while (!ready.empty()) {
        const int vertex = ready.front();
        ready.pop();
        for (int next : graph[vertex]) {
            ways[next] += ways[vertex];
            if (ways[next] >= mod) ways[next] -= mod;
            if (--indegree[next] == 0) ready.push(next);
        }
    }
    std::cout << ways[n - 1] << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
