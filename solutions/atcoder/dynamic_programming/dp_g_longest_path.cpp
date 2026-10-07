// Longest Path | https://atcoder.jp/contests/dp/tasks/dp_g
// Time: O(n + m); extra space: O(n + m).
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>



void solve() {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<int>> graph(n);
    std::vector<int> indegree(n), longest(n);
    for (int i = 0; i < m; ++i) {
        int from, to;
        std::cin >> from >> to;
        graph[from - 1].push_back(to - 1);
        ++indegree[to - 1];
    }
    std::queue<int> ready;
    for (int vertex = 0; vertex < n; ++vertex) if (indegree[vertex] == 0) ready.push(vertex);
    while (!ready.empty()) {
        const int vertex = ready.front();
        ready.pop();
        for (int next : graph[vertex]) {
            longest[next] = std::max(longest[next], longest[vertex] + 1);
            if (--indegree[next] == 0) ready.push(next);
        }
    }
    std::cout << *std::max_element(longest.begin(), longest.end()) << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
