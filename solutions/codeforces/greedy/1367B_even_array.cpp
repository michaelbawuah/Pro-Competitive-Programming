// Even Array | https://codeforces.com/problemset/problem/1367/B
// Time: O(n) per case; extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests;
    std::cin >> tests;
    while (tests-- > 0) {
        int n, wrong_even = 0, wrong_odd = 0;
        std::cin >> n;
        for (int i = 0; i < n; ++i) {
            int value; std::cin >> value;
            if (value % 2 != i % 2) { if (i % 2) ++wrong_odd; else ++wrong_even; }
        }
        std::cout << (wrong_even == wrong_odd ? wrong_even : -1) << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
