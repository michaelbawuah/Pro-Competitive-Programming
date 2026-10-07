// Luntik and Concerts | https://codeforces.com/problemset/problem/1582/A
// Time: O(1) per case; extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) { long long a,b,c; std::cin >> a >> b >> c; std::cout << (a+c)%2 << '\n'; }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
