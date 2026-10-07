// Divisibility Problem | https://codeforces.com/problemset/problem/1328/A
// Time: O(1) per case; extra space: O(1).
#include <iostream>



void solve() {
    int tests;
    std::cin >> tests;
    while (tests-- > 0) {
        int a, b;
        std::cin >> a >> b;
        std::cout << (b - a % b) % b << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
