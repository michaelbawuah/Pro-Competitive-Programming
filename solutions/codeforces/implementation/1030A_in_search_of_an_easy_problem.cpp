// In Search of an Easy Problem | https://codeforces.com/problemset/problem/1030/A
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n, hard = 0;
    std::cin >> n;
    while (n-- > 0) {
        int opinion;
        std::cin >> opinion;
        hard |= opinion;
    }
    std::cout << (hard ? "HARD" : "EASY") << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
