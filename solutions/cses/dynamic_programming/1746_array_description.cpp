// Array Description | https://cses.fi/problemset/task/1746/
// Time: O(n m); extra space: O(m).
#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>



void solve() {
    int n, maximum;
    std::cin >> n >> maximum;
    constexpr int mod = 1000000007;
    std::vector<int> previous(maximum + 2), current(maximum + 2);
    for (int index = 0; index < n; ++index) {
        int fixed;
        std::cin >> fixed;
        std::fill(current.begin(), current.end(), 0);
        for (int value = 1; value <= maximum; ++value) {
            if (fixed != 0 && fixed != value) continue;
            if (index == 0) current[value] = 1;
            else current[value] = static_cast<int>((0LL + previous[value - 1] + previous[value] + previous[value + 1]) % mod);
        }
        previous.swap(current);
    }
    long long answer = 0;
    for (int value = 1; value <= maximum; ++value) answer += previous[value];
    std::cout << answer % mod << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
