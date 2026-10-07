// Equal Candies | https://codeforces.com/problemset/problem/1676/B
// Time: O(n) per case; extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) { int n; std::cin >> n; std::vector<int> candies(n); long long total=0; for (int& x:candies) { std::cin >> x; total+=x; } std::cout << total-1LL*n* *std::min_element(candies.begin(),candies.end()) << '\n'; }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
