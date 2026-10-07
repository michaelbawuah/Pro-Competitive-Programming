// All Distinct | https://codeforces.com/problemset/problem/1692/B
// Time: O(n log n) per case; extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        int n; std::cin >> n; std::vector<int> values(n); for (int& x:values) std::cin >> x;
        std::sort(values.begin(),values.end()); const int distinct=static_cast<int>(std::unique(values.begin(),values.end())-values.begin());
        std::cout << distinct-(n-distinct)%2 << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
