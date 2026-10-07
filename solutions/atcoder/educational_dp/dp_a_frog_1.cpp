// Frog 1 | https://atcoder.jp/contests/dp/tasks/dp_a
// Time: O(n); extra space: O(n).
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <limits>



void solve() {
    int n; std::cin >> n;
    std::vector<long long> height(n), best(n, std::numeric_limits<long long>::max() / 4);
    for (auto& value : height) std::cin >> value;
    best[0] = 0;
    for (int i = 1; i < n; ++i) {
        best[i] = best[i - 1] + std::abs(height[i] - height[i - 1]);
        if (i >= 2) best[i] = std::min(best[i], best[i - 2] + std::abs(height[i] - height[i - 2]));
    }
    std::cout << best.back() << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
