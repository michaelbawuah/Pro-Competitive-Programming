// Collecting Coins | https://codeforces.com/problemset/problem/1294/A
// Time: O(1) per case; extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests;
    std::cin >> tests;
    while (tests-- > 0) {
        long long a,b,c,extra;
        std::cin >> a >> b >> c >> extra;
        const long long total = a+b+c+extra;
        std::cout << (total % 3 == 0 && total / 3 >= std::max({a,b,c}) ? "YES" : "NO") << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
