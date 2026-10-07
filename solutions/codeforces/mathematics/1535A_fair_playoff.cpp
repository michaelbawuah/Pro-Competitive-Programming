// Fair Playoff | https://codeforces.com/problemset/problem/1535/A
// Time: O(1) per case; extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        int a,b,c,d; std::cin >> a >> b >> c >> d;
        const bool fair=std::min(std::max(a,b),std::max(c,d))>std::max(std::min(a,b),std::min(c,d));
        std::cout << (fair ? "YES" : "NO") << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
