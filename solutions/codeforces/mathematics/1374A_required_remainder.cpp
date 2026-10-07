// Required Remainder | https://codeforces.com/problemset/problem/1374/A
// Time: O(1) per case; extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests;
    std::cin >> tests;
    while (tests-- > 0) {
        long long x,y,n;
        std::cin >> x >> y >> n;
        std::cout << n - (n - y) % x << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
