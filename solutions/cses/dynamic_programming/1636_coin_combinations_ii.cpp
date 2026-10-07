// Coin Combinations II | https://cses.fi/problemset/task/1636/
// Time: O(n * x); extra space: O(x).
#include <iostream>
#include <vector>



void solve() {
    int n, target;
    std::cin >> n >> target;
    constexpr int mod = 1000000007;
    std::vector<int> ways(target + 1);
    ways[0] = 1;
    for (int i = 0; i < n; ++i) {
        int coin;
        std::cin >> coin;
        for (int sum = coin; sum <= target; ++sum) {
            ways[sum] += ways[sum - coin];
            if (ways[sum] >= mod) ways[sum] -= mod;
        }
    }
    std::cout << ways[target] << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
