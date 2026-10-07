// Gifts Fixing | https://codeforces.com/problemset/problem/1399/B
// Time: O(n) per case; extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        int n; std::cin >> n; std::vector<long long> a(n),b(n);
        for (auto& x : a) std::cin >> x;
        for (auto& x : b) std::cin >> x;
        const auto low_a = *std::min_element(a.begin(),a.end()), low_b = *std::min_element(b.begin(),b.end());
        long long moves = 0;
        for (int i = 0; i < n; ++i) moves += std::max(a[i]-low_a,b[i]-low_b);
        std::cout << moves << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
