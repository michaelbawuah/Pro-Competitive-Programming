// Minimal Square | https://codeforces.com/problemset/problem/1360/A
// Time: O(1) per case; extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests;
    std::cin >> tests;
    while (tests-- > 0) {
        int a,b; std::cin >> a >> b;
        const int side = std::max(std::max(a,b), 2 * std::min(a,b));
        std::cout << side * side << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
