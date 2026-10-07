// Building Teams | https://cses.fi/problemset/task/1668/
// Time: O(n + m); extra space: O(n + m).
#include <iostream>
#include <vector>
#include <queue>



void solve() {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<int>> graph(n);
    for (int i = 0, a, b; i < m; ++i) {
        std::cin >> a >> b;
        graph[a - 1].push_back(b - 1);
        graph[b - 1].push_back(a - 1);
    }
    std::vector<int> team(n);
    for (int start = 0; start < n; ++start) {
        if (team[start] != 0) continue;
        std::queue<int> queue;
        queue.push(start);
        team[start] = 1;
        while (!queue.empty()) {
            int u = queue.front(); queue.pop();
            for (int v : graph[u]) {
                if (team[v] == 0) { team[v] = 3 - team[u]; queue.push(v); }
                else if (team[v] == team[u]) { std::cout << "IMPOSSIBLE\n"; return; }
            }
        }
    }
    for (int i = 0; i < n; ++i) std::cout << team[i] << (i + 1 == n ? '\n' : ' ');
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
