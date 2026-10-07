// Two Sets II | https://cses.fi/problemset/task/1093/
// Time: O(n^3); extra space: O(n^2).
#include <iostream>
#include <vector>



void solve() {
    int n;
    std::cin >> n;
    const int total = n * (n + 1) / 2;
    if (total % 2 != 0) {
        std::cout << 0 << '\n';
        return;
    }
    const int target = total / 2;
    constexpr int mod = 1000000007;
    std::vector<int> ways(target + 1);
    ways[0] = 1;
    for (int value = 1; value < n; ++value) {
        for (int sum = target; sum >= value; --sum) {
            ways[sum] += ways[sum - value];
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
