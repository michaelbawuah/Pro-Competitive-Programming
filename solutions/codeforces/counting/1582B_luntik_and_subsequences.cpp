// Luntik and Subsequences | https://codeforces.com/problemset/problem/1582/B
// Time: O(n) per case; extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        int n,zeros=0,ones=0; std::cin >> n;
        while (n-- > 0) { int value; std::cin >> value; zeros+=value==0; ones+=value==1; }
        std::cout << static_cast<long long>(ones)*(1LL<<zeros) << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
