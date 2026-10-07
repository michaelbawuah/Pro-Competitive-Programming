// Dice Combinations | https://cses.fi/problemset/task/1633/
// Time: O(n); extra space: O(n).
#include <iostream>
#include <vector>



void solve() {
    int n;
    std::cin >> n;
    constexpr int mod = 1000000007;
    std::vector<int> ways(n + 1);
    ways[0] = 1;
    for (int sum = 1; sum <= n; ++sum) {
        for (int face = 1; face <= 6 && face <= sum; ++face) {
            ways[sum] += ways[sum - face];
            if (ways[sum] >= mod) ways[sum] -= mod;
        }
    }
    std::cout << ways[n] << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
