// Reading Books | https://cses.fi/problemset/task/1631/
// Time: O(n); extra space: O(1).
#include <iostream>
#include <algorithm>



void solve() {
    int n; std::cin >> n;
    long long total = 0, longest = 0;
    for (int i = 0; i < n; ++i) { long long time; std::cin >> time; total += time; longest = std::max(longest, time); }
    std::cout << std::max(total, 2 * longest) << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
