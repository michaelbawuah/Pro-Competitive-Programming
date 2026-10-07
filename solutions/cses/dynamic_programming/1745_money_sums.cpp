// Money Sums | https://cses.fi/problemset/task/1745/
// Time: O(n S), S = sum of coins; extra space: O(S).
#include <iostream>
#include <numeric>
#include <vector>



void solve() {
    int n;
    std::cin >> n;
    std::vector<int> coins(n);
    for (int& coin : coins) std::cin >> coin;
    const int total = std::accumulate(coins.begin(), coins.end(), 0);
    std::vector<bool> reachable(total + 1);
    reachable[0] = true;
    for (int coin : coins) {
        for (int sum = total; sum >= coin; --sum)
            reachable[sum] = reachable[sum] || reachable[sum - coin];
    }
    int count = 0;
    for (int sum = 1; sum <= total; ++sum) if (reachable[sum]) ++count;
    std::cout << count << '\n';
    for (int sum = 1; sum <= total; ++sum) if (reachable[sum]) std::cout << sum << ' ';
    std::cout << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
