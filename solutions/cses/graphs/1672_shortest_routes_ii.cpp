// Shortest Routes II | https://cses.fi/problemset/task/1672/
// Time: O(n^3 + m + q); extra space: O(n^2).
#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>



void solve() {
    int n, m, queries;
    std::cin >> n >> m >> queries;
    constexpr long long infinity = std::numeric_limits<long long>::max() / 4;
    std::vector<std::vector<long long>> distance(n, std::vector<long long>(n, infinity));
    for (int i = 0; i < n; ++i) distance[i][i] = 0;
    for (int i = 0; i < m; ++i) {
        int a, b;
        long long weight;
        std::cin >> a >> b >> weight;
        --a; --b;
        distance[a][b] = distance[b][a] = std::min(distance[a][b], weight);
    }
    for (int middle = 0; middle < n; ++middle) {
        for (int from = 0; from < n; ++from) {
            if (distance[from][middle] == infinity) continue;
            for (int to = 0; to < n; ++to) {
                if (distance[middle][to] == infinity) continue;
                distance[from][to] = std::min(distance[from][to], distance[from][middle] + distance[middle][to]);
            }
        }
    }
    while (queries-- > 0) {
        int a, b;
        std::cin >> a >> b;
        const long long answer = distance[a - 1][b - 1];
        std::cout << (answer == infinity ? -1 : answer) << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
