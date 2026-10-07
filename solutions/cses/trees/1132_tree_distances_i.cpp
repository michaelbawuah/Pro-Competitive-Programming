// Tree Distances I | https://cses.fi/problemset/task/1132/
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

std::vector<int> distances(const std::vector<std::vector<int>>& graph, int start) {
    std::vector<int> distance(graph.size(), -1);
    std::queue<int> pending;
    distance[start] = 0;
    pending.push(start);
    while (!pending.empty()) {
        const int vertex = pending.front();
        pending.pop();
        for (int next : graph[vertex]) {
            if (distance[next] != -1) continue;
            distance[next] = distance[vertex] + 1;
            pending.push(next);
        }
    }
    return distance;
}
int farthest(const std::vector<int>& distance) {
    return static_cast<int>(std::max_element(distance.begin(), distance.end()) - distance.begin());
}

void solve() {
    int n;
    std::cin >> n;
    std::vector<std::vector<int>> graph(n);
    for (int i = 1; i < n; ++i) {
        int a, b;
        std::cin >> a >> b;
        graph[a - 1].push_back(b - 1);
        graph[b - 1].push_back(a - 1);
    }

    const int first = farthest(distances(graph, 0));
    const auto from_first = distances(graph, first);
    const int second = farthest(from_first);
    const auto from_second = distances(graph, second);
    for (int vertex = 0; vertex < n; ++vertex)
        std::cout << std::max(from_first[vertex], from_second[vertex]) << ' ';
    std::cout << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
