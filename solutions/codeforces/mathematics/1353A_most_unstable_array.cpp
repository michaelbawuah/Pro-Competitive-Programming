// Most Unstable Array | https://codeforces.com/problemset/problem/1353/A
// Time: O(1) per case; extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests;
    std::cin >> tests;
    while (tests-- > 0) { int n,m; std::cin >> n >> m; std::cout << (n == 1 ? 0 : n == 2 ? m : 2 * m) << '\n'; }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
