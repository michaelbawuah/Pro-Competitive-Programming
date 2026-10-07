// Vasya the Hipster | https://codeforces.com/problemset/problem/581/A
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int red, blue;
    std::cin >> red >> blue;
    const int mixed = std::min(red, blue);
    std::cout << mixed << ' ' << (std::max(red, blue) - mixed) / 2 << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
