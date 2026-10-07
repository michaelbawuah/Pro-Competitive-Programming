// Frog 2 | https://atcoder.jp/contests/dp/tasks/dp_b
// Time: O(n * k); extra space: O(n).
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <limits>



void solve() {
    int n, k; std::cin >> n >> k;
    std::vector<long long> height(n), best(n, std::numeric_limits<long long>::max() / 4);
    for (auto& value : height) std::cin >> value;
    best[0] = 0;
    for (int i = 1; i < n; ++i) {
        for (int jump = 1; jump <= k && jump <= i; ++jump) {
            best[i] = std::min(best[i], best[i - jump] + std::abs(height[i] - height[i - jump]));
        }
    }
    std::cout << best.back() << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
