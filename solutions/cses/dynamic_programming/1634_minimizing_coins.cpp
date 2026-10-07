// Minimizing Coins | https://cses.fi/problemset/task/1634/
// Time: O(n * x); extra space: O(n + x).
#include <iostream>
#include <vector>
#include <algorithm>



void solve() {
    int n, target;
    std::cin >> n >> target;
    std::vector<int> coins(n);
    for (auto& coin : coins) std::cin >> coin;
    std::vector<int> best(target + 1, target + 1);
    best[0] = 0;
    for (int sum = 1; sum <= target; ++sum) {
        for (int coin : coins) {
            if (coin <= sum) best[sum] = std::min(best[sum], best[sum - coin] + 1);
        }
    }
    std::cout << (best[target] > target ? -1 : best[target]) << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
