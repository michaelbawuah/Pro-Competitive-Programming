// Flight Discount | https://cses.fi/problemset/task/1195/
// Time: O((n + m) log(n + m)); extra space: O(n + m).
#include <array>
#include <functional>
#include <iostream>
#include <limits>
#include <queue>
#include <tuple>
#include <utility>
#include <vector>



void solve() {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<std::pair<int, long long>>> graph(n);
    for (int i = 0; i < m; ++i) {
        int from, to;
        long long cost;
        std::cin >> from >> to >> cost;
        graph[from - 1].push_back({to - 1, cost});
    }
    constexpr long long infinity = std::numeric_limits<long long>::max() / 4;
    std::vector<std::array<long long, 2>> distance(n, {infinity, infinity});
    using State = std::tuple<long long, int, int>;
    std::priority_queue<State, std::vector<State>, std::greater<State>> pending;
    distance[0][0] = 0;
    pending.push({0, 0, 0});
    while (!pending.empty()) {
        const auto [cost, vertex, used] = pending.top();
        pending.pop();
        if (cost != distance[vertex][used]) continue;
        for (const auto& [next, price] : graph[vertex]) {
            if (cost + price < distance[next][used]) {
                distance[next][used] = cost + price;
                pending.push({cost + price, next, used});
            }
            if (used == 0 && cost + price / 2 < distance[next][1]) {
                distance[next][1] = cost + price / 2;
                pending.push({distance[next][1], next, 1});
            }
        }
    }
    std::cout << distance[n - 1][1] << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
