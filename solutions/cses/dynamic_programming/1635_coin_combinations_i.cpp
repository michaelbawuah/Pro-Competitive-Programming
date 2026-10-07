// Coin Combinations I | https://cses.fi/problemset/task/1635/
// Time: O(n x); extra space: O(n + x).
#include <iostream>
#include <vector>



void solve() {
    int n, target;
    std::cin >> n >> target;
    std::vector<int> coins(n);
    for (int& coin : coins) std::cin >> coin;
    constexpr int mod = 1000000007;
    std::vector<int> ways(target + 1);
    ways[0] = 1;
    for (int sum = 1; sum <= target; ++sum) {
        for (int coin : coins) {
            if (coin <= sum) {
                ways[sum] += ways[sum - coin];
                if (ways[sum] >= mod) ways[sum] -= mod;
            }
        }
    }
    std::cout << ways[target] << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
