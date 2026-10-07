// Missing Coin Sum | https://cses.fi/problemset/task/2183/
// Time: O(n log n); extra space: O(n).
#include <iostream>
#include <vector>
#include <algorithm>



void solve() {
    int n; std::cin >> n;
    std::vector<long long> coins(n);
    for (auto& coin : coins) std::cin >> coin;
    std::sort(coins.begin(), coins.end());
    long long missing = 1;
    for (long long coin : coins) {
        if (coin > missing) break;
        missing += coin;
    }
    std::cout << missing << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
