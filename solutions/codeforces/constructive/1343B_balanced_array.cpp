// Balanced Array | https://codeforces.com/problemset/problem/1343/B
// Time: O(n) per case; extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests;
    std::cin >> tests;
    while (tests-- > 0) {
        int n; std::cin >> n;
        if (n % 4 != 0) { std::cout << "NO\n"; continue; }
        const int half = n / 2;
        std::cout << "YES\n";
        for (int i = 1; i <= half; ++i) std::cout << 2 * i << ' ';
        for (int i = 1; i < half; ++i) std::cout << 2 * i - 1 << ' ';
        std::cout << 3 * half - 1 << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
