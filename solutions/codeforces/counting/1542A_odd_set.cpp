// Odd Set | https://codeforces.com/problemset/problem/1542/A
// Time: O(n) per case; extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        int n,odd=0; std::cin >> n;
        for (int i=0;i<2*n;++i) { int value; std::cin >> value; odd+=value%2; }
        std::cout << (odd==n ? "YES" : "NO") << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
