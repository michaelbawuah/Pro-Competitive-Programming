// Shortest Routes I | https://cses.fi/problemset/task/1671/
// Time: O((n + m) log(n + m)); extra space: O(n + m).
#include <iostream>
#include <vector>
#include <queue>
#include <functional>
#include <utility>
#include <limits>



void solve() {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<std::pair<int, long long>>> graph(n);
    for (int i = 0; i < m; ++i) {
        int a, b;
        long long cost;
        std::cin >> a >> b >> cost;
        graph[a - 1].emplace_back(b - 1, cost);
    }
    constexpr long long infinity = std::numeric_limits<long long>::max() / 4;
    std::vector<long long> distance(n, infinity);
    using State = std::pair<long long, int>;
    std::priority_queue<State, std::vector<State>, std::greater<State>> queue;
    distance[0] = 0;
    queue.emplace(0, 0);
    while (!queue.empty()) {
        auto [cost, u] = queue.top(); queue.pop();
        if (cost != distance[u]) continue;
        for (auto [v, weight] : graph[u]) {
            if (cost + weight < distance[v]) {
                distance[v] = cost + weight;
                queue.emplace(distance[v], v);
            }
        }
    }
    for (int i = 0; i < n; ++i) std::cout << distance[i] << (i + 1 == n ? '\n' : ' ');
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
