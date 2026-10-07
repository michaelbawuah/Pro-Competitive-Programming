// Plus One on the Subset | https://codeforces.com/problemset/problem/1624/A
// Time: O(n) per case; extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        int n; std::cin >> n; std::vector<int> values(n);
        for (int& x:values) std::cin >> x;
        std::cout << *std::max_element(values.begin(),values.end())-*std::min_element(values.begin(),values.end()) << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
