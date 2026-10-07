// Knapsack 1 | https://atcoder.jp/contests/dp/tasks/dp_d
// Time: O(n W); extra space: O(W).
#include <algorithm>
#include <iostream>
#include <vector>



void solve() {
    int n, capacity;
    std::cin >> n >> capacity;
    std::vector<long long> best(capacity + 1);
    for (int item = 0; item < n; ++item) {
        int weight;
        long long value;
        std::cin >> weight >> value;
        for (int limit = capacity; limit >= weight; --limit)
            best[limit] = std::max(best[limit], best[limit - weight] + value);
    }
    std::cout << best[capacity] << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
